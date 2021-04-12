
/*
This example should consist of:
MATCH
GEPSEQ
BINOP
INTSEQ

*/
void example(int *A, int *B, int n) {
  for (int i = 0; i<n; i += 8) {
    A[i] = B[i] * i;
    A[i+1] = B[i+1] * (i + 1);
    A[i+2] = B[i+2] * (i + 2);
    A[i+3] = B[i+3] * (i + 3);
    A[i+4] = B[i+4] * (i + 4);
    A[i+5] = B[i+5] * (i + 5);
    A[i+6] = B[i+6] * (i + 6);
    A[i+7] = B[i+7] * (i + 7);
  }
}
