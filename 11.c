#include <stdio.h>
#include <limits.h>

int main() {
    int n,i;

    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int largest=INT_MIN;
    int second=INT_MIN;

    for(i=0;i<n;i++) {
        if(a[i]>largest) {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest) {
            second=a[i];
        }
    }

    if(second==INT_MIN)
        printf("No second largest element");
    else
        printf("Second Largest = %d",second);

    return 0;
}