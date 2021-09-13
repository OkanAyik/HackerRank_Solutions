#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int temp;
    temp = *a + *b;

    if((*a - *b)>=0)
        *b = *a - *b;
    else if ((*a - *b)<0)
        *b = *b - *a;    

    *a = temp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

