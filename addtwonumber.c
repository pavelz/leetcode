#include <stdio.h>

typedef int datum[3];
datum out = {7, 0, 8};

int reverseIntoNum(datum d){
  return d[2] * 100 + d[1] * 10 + d[0];
}

void reverseIntoDatum(int num, datum *ret){
  (*ret)[0] = num % 10;
  (*ret)[1] = num / 10 - (num / 100) * 10;
  (*ret)[2] = num / 100;
}

void addTwoNumbers(datum *res){

  datum one = {2,4,3};
  datum two = {5,6,4};
  int oneNum = reverseIntoNum(one);
  int twoNum = reverseIntoNum(two);
  int resNum = oneNum + twoNum;
  printf("before flip: %d %d %d\n", oneNum, twoNum, resNum);
  reverseIntoDatum(resNum, res);
}


int main(){
  printf("add twonumbers explore\n");
  datum res;
  addTwoNumbers(&res);
  printf("results are in: %d -> %d -> %d\n", res[0], res[1], res[2]);
  return 0;
}

