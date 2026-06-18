#include <stdio.h>

int main() {
    int n,i,e=0,o=0;

    scanf("%d",&n);
    int a[n], even[n], odd[n];

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);

        if(a[i]%2==0)
            even[e++]=a[i];
        else
            odd[o++]=a[i];
    }

    printf("Even Array:\n");
    for(i=0;i<e;i++)
        printf("%d ",even[i]);

    printf("\nOdd Array:\n");
    for(i=0;i<o;i++)
        printf("%d ",odd[i]);

    return 0;
}