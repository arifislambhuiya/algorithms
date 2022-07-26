#include<stdio.h>
long long int binaryExpo(int base,int power){

  long int result = 1;
  while(power){
      if(power%2 ==1){
          result*=base;
          power--;
      }else{
          base*=base;
          power/=2;
      }
  }
  return result;

}


int main(){

  int base = 4, power = 10;
  long int result = binaryExpo(base, power);
  printf("%lli", result);

    return 0;
}