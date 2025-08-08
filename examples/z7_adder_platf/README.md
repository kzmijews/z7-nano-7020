# Z7 Adder Platform setup

Create the platform using the `z7_adder_design_wrapper.xsa` hardware specification file.
This file was generated as an HDL wrapper from the `z7_adder_proj` design included in
the Vivado project. The platform is needed for embedded apps to run.

## To create the platform project from the .xsa file:
1. Open Vitis IDE.
2. Select "File" → "New Component" → "Platform".
3. Set Component name to: `z7_adder_platf`, click "Next"
4. Select "Hardware Design", click on "Browse" button
and select the `z7_adder_design_wrapper.xsa` file.

Follow the prompts to create the platform project.
