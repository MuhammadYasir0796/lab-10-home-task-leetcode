#include <stdio.h>
#include <stdlib.h>
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *returnNums=(int*)malloc(numsSize * sizeof(int));
    for(int i=0;i<numsSize;i++) returnNums[i]=0;
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<=i;j++){
            returnNums[i] += nums[j];
        }
    }
    *returnSize=numsSize;
    return returnNums;
}
int main() {
    int size=4;
    int nums[4]={1,2,3,4};
    int returnSize=size;
    int *returnArray=runningSum(nums,size,&returnSize);
    for(int i=0;i<returnSize;i++){
        printf("%d ",returnArray[i]);
    }
    free(returnArray);
    return 0;
}