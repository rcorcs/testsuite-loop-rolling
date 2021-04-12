
/*
Tests basic capability for identifying sequence of binary operations.
A BinOpSequenceNode should be created, recognizing the first term of
the sequence as an operation over the neutral element.

In this example, we have multiple terms that should be identified as
an operation over the neutral element.
This must still be identified as a sequence of binary operations.

This example should consist of:
MATCH
GEPSEQ
BINOP
INTSEQ
*/
void example(int *A, int *B, int *C) {
  A[0] = B[0]*C[0]; // + 0 simplified
  A[1] = B[1]*C[1] + 1;
  A[2] = B[2]*C[2] + 2;
  A[3] = B[3]*C[3] + 3;
  A[4] = B[4]*C[4] + 4;
  A[5] = B[5]*C[5] + 5;
  A[6] = B[6]*C[6] + 6;
  A[7] = B[7]*C[7] + 7;
}
