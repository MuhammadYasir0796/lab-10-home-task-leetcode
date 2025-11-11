#include <stdio.h>
#include <stdlib.h>
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int *result=(int*)malloc(sizeof(int) * numsSize);
    for(int i=0;i<numsSize;i++){
        if(nums[i] %2==0) nums[i]=0;
        else nums[i]=1;
    }
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0) result[j++]=nums[i];
    }
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1) result[j++]=nums[i];
    }
    *returnSize=j;
    return result;
}
int main() {
    int size=5;
    int nums[5]={1,5,1,4,2};
    int returnSize=size;
    int *returnArray=transformArray(nums,size,&returnSize);
    for(int i=0;i<returnSize;i++){
        printf("%d ",returnArray[i]);
    }
    free(returnArray);
    return 0;
}