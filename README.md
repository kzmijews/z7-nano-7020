# Z7-Nano 7020 XC7Z020

> ⚠️ **Warning**: This project is currently under development, was not verified yet and may not be fully functional. Stay tuned for updates!

## Overview
This project contains the board definition files required by the **Vitis IDE** for the **Z7-Nano** development board,
which is based on the **Xilinx Zynq-7000 SoC** (XC7Z020) and manufactured by **MicroPhase**. The board features the following:

<div>
    <p align="center" width="100%" height="100%">
        <img src="./board_files/z7-nano-7020/1.0/z7-nano-board.png"/>
    </p>
</div>


- 667 MHz dual-core Cortex-A9 processor
- DDR3L memory controller with 8 DMA channels and 4
- High-Performance AXI3 Slave ports
- High-bandwidth peripheral controllers: 1G Ethernet, USB 2.0, SDIO
- Low-bandwidth peripheral controllers: SPI, UART, CAN, I2C
- Programmable from JTAG, Quad-SPI flash, and microSD card
- Programmable logic equivalent to Artix-7 FPGA
  - LUTs: 53,200
  - DSP Slices: 220
  - Logic Cells: 85K
  - Flip-Flops: 106,400
  - Total Block RAM: 4.9Mb
- Analog Mixed Signal (AMS) / XADC: 2x 12 bit, MSPS ADCs with up to 17 Differential Inputs
- Security: AES & SHA 256b Decryption & Authentication for Secure Programmable Logic Config

Full documentation is available
[here](https://fpga-docs.microphase.cn/projects/documentation-of-microphase-fpga-board/en/latest/DEV_BOARD/Z7-NANO/Z7-NANO_Reference_Manual.html)

## Installation
```bash
cp -r z7-nano-7020/board_files/z7-nano-7020 /opt/Xilinx/2025.1/data/boards/board_files/
```