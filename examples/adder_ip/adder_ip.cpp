void adder_ip(unsigned int a,
              unsigned int b,
              unsigned int *c) {
    // To transform C code into synthesizable IP, synthesis directives are required.
    // These directives are provided using pragmas. The pragmas below define the pinout 
    // mapping on the FPGA.
    #pragma HLS INTERFACE s_axilite port=a
    #pragma HLS INTERFACE s_axilite port=b
    #pragma HLS INTERFACE s_axilite port=c
    #pragma HLS INTERFACE s_axilite port=return
    *c = a + b;
}