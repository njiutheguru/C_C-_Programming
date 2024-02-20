#include <stdbool.h>
#include <stdio.h>
int containsDuplicate(int nums[], int numsSize){
    int k=0;
for(int i = 0; i < numsSize-1;i++)
{
    for(int j = i+1; j < numsSize;j++)
    {
    if(nums[i] == nums[j])
    { k=1;}
    }
}
return k;
}
int main()
{

    int arr[]={1,2,3,-4,5,4,7,8,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    //containsDuplicate(arr,n); 
    if(containsDuplicate(arr,n)==1)
    {
        printf("True");
    }
    else 
    {
    printf("False");
    }

    return 0;
}