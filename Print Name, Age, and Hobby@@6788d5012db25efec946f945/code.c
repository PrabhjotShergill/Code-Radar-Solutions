#include <stdio.h>
int main(){
    char name[20];
    int age;
    char hobby[30];
    scanf("%19s", &name);
    scanf("%d", &age);
    scanf("%29s", &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);
    return 0;
}
