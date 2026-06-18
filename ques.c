#include <stdio.h>
int main() {
int xylem[10];
int i;
printf("enter 10 xylem numbers\n");
for(i=0;i<10;i++){
    scanf("%d", &xylem[i]);
}
printf("the xylem numbers are\n");
for(i=0;i<10;i++){
    printf("%d ", xylem[i]);
}
return 0;
}