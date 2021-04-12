

/*

Tests basic capability for identifying sequence of alternating values,
where an AlternatingSequenceNode should be created.

For example, a sequence of values
V0, V1, V0, V1, ...
should be represented as
(i%2)?V1:V0
where i is the induction variable starting from 0 and incremented by 1 at every iteration.

This example should consist of:
MATCH
GEPSEQ
ALTSEQ
INTSEQ
*/
void example(int *A, int factor) {
  A[0] = factor;
  A[1] = 0;
  A[2] = factor;
  A[3] = 0;
  A[4] = factor;
  A[5] = 0;
  A[6] = factor;
  A[7] = 0;
}
