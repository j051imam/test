#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%d", &n);

  if(( n & 1) == 0 ){
    /*
    訂正理由：n & 1 は、変数 n の最下位ビットが1であるかどうかを判定するビット演算であり、
      整数 n が偶数の場合、最下位ビットは必ず0になるから。
      /*
    printf("%d は偶数です\n", n);
  }else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}
