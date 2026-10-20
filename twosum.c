#include <stdio.h>

int nums[4] = {11, 15, 2, 7};
int target = 9;


int twoSumLong(){
  int best = 0;
  for(int i = 0; i < 4; i++){
    for(int b = 0; b < 4; b++){
      if(nums[i] + nums[b] == target && i != b){
        printf("indicies: %d %d\n", i, b);
        return 0;
      }
    }
  }
  printf("no match found\n");
  return 0;
}

int twoSumFast(){
  for(int i=0; i < 4; i++){
    int candidate = target - nums[i];
    for(int f=0; f<4; f++){
      if(nums[f] == candidate){
        printf("candidates found, indicies: %d %d\n", i, f);
        return 0;
      }
    }
  }
  printf("no twosum %d found\n", target);
  return 0;
}

int main(){
  twoSumLong();
  twoSumFast();
  return 0;
}
