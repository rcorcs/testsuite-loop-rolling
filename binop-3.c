
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
ALTSEQ
*/
void example(int *A, int *B) {
  A[0] = B[0]; // + 0 simplified
  A[1] = B[1] + 1;
  A[2] = B[2]; // + 0 simplified
  A[3] = B[3] + 1;
  A[4] = B[4]; // + 0 simplified
  A[5] = B[5] + 1;
  A[6] = B[6]; // + 0 simplified
  A[7] = B[7] + 1;
}
