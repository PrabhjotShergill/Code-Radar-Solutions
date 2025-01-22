#include <stdio.h>

char* welcome(name, age, hobby) {
    scanf("%s", &name);
    scanf("%d", &age);
    scanf("%s", &hobby);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);
}

int main() {
    char name[20];
    int age;
    char hobby[35];
    welcome(name, age, hobby);
    return 0;
}