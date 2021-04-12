

/*
Tests basic capability for identifying sequence of binary operations.
A BinOpSequenceNode should be created, recognizing the first term of
the sequence as an operation over the neutral element.

In this example, the other operand is a fixed term, making it easy
to identify the sequence of binary operations.

This example should consist of:
MATCH
GEPSEQ
BINOP
IDENTICAL
INTSEQ
*/
void example(int *A, int factor) {
  A[0] = factor;// + 0 simplified
  A[1] = factor + 1;
  A[2] = factor + 2;
  A[3] = factor + 3;
  A[4] = factor + 4;
  A[5] = factor + 5;
  A[6] = factor + 6;
  A[7] = factor + 7;
}
