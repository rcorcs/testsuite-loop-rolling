
void foo(int a, int b);
void bar(int a, int b);

void example(int *A, int *B) {
 A[0] = A[0] + B[0];
 foo(1,10);
 bar(1,20);
 A[1] = A[1] + B[1];
 foo(2,11);
 bar(2,21);
 A[2] = A[2] + B[2];
 foo(3,12);
 bar(3,22);
 A[3] = A[3] + B[3];
 foo(4,13);
 bar(4,23);
}
