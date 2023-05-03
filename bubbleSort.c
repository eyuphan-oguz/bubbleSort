
#include <stdio.h>

void bubble_sort(int arr[],int length)
{
    int temp;
    
    for(int i =0 ; i < length-1; i++){
        for(int j = i+1 ; j<length ; j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0; i<length;i++){
        printf("%d",arr[i]);
    }
}
// temp=2
//arr[j]=7
//arr[i]=2
int main()
{
    int dizi[]={5,7,2,9,6,1,3,8,7,5,13};
    int length = sizeof(dizi) / sizeof(dizi[0]);
    bubble_sort(dizi,length);
    
    return 0;
}


