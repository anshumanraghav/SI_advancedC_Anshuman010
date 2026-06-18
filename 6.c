#include <stdio.h>

int main() {
    int n,i,target;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&target);

    for(i=0;i<n;i++) {
        if(a[i]==target) {
            printf("Found at index %d",i);
            return 0;
        }
    }

    printf("Element not present");

    return 0;
}