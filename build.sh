../release/bin/clang $1 -Os -emit-llvm -S -o $1.ll -fno-vectorize -fno-slp-vectorize
../release/bin/opt -loop-reroll  $1.ll -o $1.bl.ll -S
../release/bin/opt -loop-rolling  $1.ll -o $1.opt.ll -S
../release/bin/clang $1.ll -Os -c -o $1.o -fno-vectorize -fno-slp-vectorize
../release/bin/clang $1.bl.ll -Os -c -o $1.bl.o -fno-vectorize -fno-slp-vectorize
../release/bin/clang $1.opt.ll -Os -c -o $1.opt.o -fno-vectorize -fno-slp-vectorize

#../release/bin/clang $1.ll -Os -o $1.out
#../release/bin/clang $1.bl.ll -Os -o $1.bl.out
#../release/bin/clang $1.opt.ll -Os -o $1.opt.out

