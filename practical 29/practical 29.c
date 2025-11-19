#include <stdio.h>
struct Coach {
    char name[30];
    int age;
    int exp;
};

struct Team {
    char teamName[30];
    char sport[30];
    struct Coach c;
};

int main() {
    struct Team t;
    printf("id no:25ce106\n;");
    printf("Enter Team Name: ");
    scanf("%s", t.teamName);

    printf("Enter Sport Type: ");
    scanf("%s", t.sport);
    getchar();
    printf("Enter Coach Name: ");
    scanf("%s", t.c.name);

    printf("Enter Coach Age: ");
    scanf("%d", &t.c.age);

    printf("Enter Coach Experience: ");
    scanf("%d", &t.c.exp);

    printf("\n--- Team Details ---\n");
    printf("Team Name: %s\n", t.teamName);
    printf("Sport Type: %s\n", t.sport);
    printf("Coach Name: %s\n", t.c.name);
    printf("Coach Age: %d\n", t.c.age);
    printf("Coach Experience: %d years\n", t.c.exp);

    return 0;
}

