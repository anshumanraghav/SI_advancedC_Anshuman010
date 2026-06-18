#include <stdio.h>

int main() {
    int n, i, pos, val;

    scanf("%d",&n);
    int a[100];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d%d",&pos,&val);

    for(i=n;i>pos;i--)
        a[i]=a[i-1];

    a[pos]=val;
    n++;

    printf("After insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    scanf("%d",&pos);

    for(i=pos;i<n-1;i++)
        a[i]=a[i+1];

    n--;

    printf("\nAfter deletion:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
