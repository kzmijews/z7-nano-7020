/******************************************************************************
* Copyright (C) 2023 Advanced Micro Devices, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/
/*
 * adder.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "xadder_ip.h"
#include "xparameters.h"

int main() {
    // init z7_adder_plaf platform
    init_platform();
    // init adder ip
    XAdder_ip adder_ip;
    XAdder_ip_Config *p_cfg = XAdder_ip_LookupConfig(XPAR_ADDER_IP_0_BASEADDR);
    XAdder_ip_CfgInitialize(&adder_ip, p_cfg);
    // set adder ip inputs
    XAdder_ip_Set_a(&adder_ip, 1000);
    XAdder_ip_Set_b(&adder_ip, 2000);
    // evaluate adder ip
    XAdder_ip_Start(&adder_ip);
    // wait until adder ip finish processing
    while(!XAdder_ip_IsDone(&adder_ip));
    // Print Results on UART
    print("Adder IP evaluation:\n\r");
    printf(
        "%d + %d = %d\n\r",
        (int)XAdder_ip_Get_a(&adder_ip),
        (int)XAdder_ip_Get_b(&adder_ip),
        (int)XAdder_ip_Get_c(&adder_ip)
    );
    print("Finished execution\n\r");
    // cleanup z7_adder_plaf
    cleanup_platform();
    return 0;
}
