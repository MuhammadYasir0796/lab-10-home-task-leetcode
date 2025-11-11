#include <stdio.h>
#include <stdlib.h>
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *result=(int*)malloc(numsSize * sizeof(int));
    int j=0;
    for(int i=0;i<n;i++){
        result[j]=nums[i];
        result[j+1]=nums[i+n];
        j+=2;
    }
    *returnSize=j;
    return result;
}
int main() {
    int size=6;
    int nums[6]={2,5,1,3,4,7};
    int returnSize=size,shufleBy=3;
    int *returnArray=shuffle(nums,size,shufleBy,&returnSize);
    for(int i=0;i<returnSize;i++){
        printf("%d ",returnArray[i]);
    }
    free(returnArray);
    return 0;
}