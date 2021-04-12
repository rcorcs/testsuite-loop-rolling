for F in $(ls *.c); do
  echo $F
  sh build.sh $F;
done
