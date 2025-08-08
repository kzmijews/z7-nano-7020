# Z7 Adder app

This application runs a simple program that utilizes the `adder_ip` core by sending input
values and retrieving the calculation result from the IP included in the `z7_adder_platf`
platform (based on the hardware description exported from the `z7_adder_proj` Vivado project).

To view the output, ensure that the Xilinx drivers are installed. Then, connect to the serial
console via the appropriate COM port. You can use an external terminal emulator such as PuTTY
or the built-in Serial Monitor within Vitis (navigate to: Vitis → Serial Monitor), select the
available COM port, and set the baud rate to **115200**.

<div>
    <p align="center" width="100%" height="100%">
        <img src="../imgs/z7-adder-app.png"/>
    </p>
</div>
