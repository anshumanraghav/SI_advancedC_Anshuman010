#include<stdio.h>
int main(){
      int arr1[5]={2,4,6,8,10};
      int arr2[5]={1,3,5,7,9};
      for(int i=0;i<5;i++){
            printf("%d ",arr1[i]);
            for(int j=0;j<5;j++){
                  if(arr1[i]==arr2[j]){
                        printf("is common\n");
                        break;
                  }
                }
            }
      }
      