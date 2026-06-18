#include<stdio.h>
int main() {
    int arr[100], n, i;
    int num, temp, rev, rem;
    int found = 0;

    printf("enterthe size of the array\n");
    scanf("%d", &n);
    printf("enter %d elements\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   for(i=0;i<n;i++){
    num=arr[i];
    rev=0;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==arr[i]){
        found=1;
        break;
    }
   } if(found){
    printf("the first palindrome number is %d", arr[i]);
    } else {
        printf("no palindrome number found in the array");
    }
    return 0;
}