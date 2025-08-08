# Examples

This directory contains several basic examples designed to manually verify the functionalities provided
by the **Z7 Nano board**, based on the included board files definitions. The available examples are:
- adder_ip — A simple full adder IP core created using High-Level Synthesis (HLS) to test the IP
    integration and hardware functionality.
- z7_adder_app — An embedded application that utilizes the adder_ip to perform addition operations and
    demonstrate software-hardware interaction.
- z7_adder_platf — The Vitis platform project based on the hardware description exported from the Vivado
    design, providing the runtime environment for embedded applications.
- z7_adder_proj — The Vivado project containing the hardware design, including the IP integrator block
    design and necessary constraints for the Z7 Nano board.
