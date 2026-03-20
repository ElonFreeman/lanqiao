#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char name[20];
    struct Student *next;
} Student;

Student* createList(int n) {
    Student *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        Student *s = (Student*)malloc(sizeof(Student));
        printf("输入第%d个学生姓名：", i + 1);
        scanf("%s", s->name);
        s->next = NULL;
        if (!head) head = s;
        else tail->next = s;
        tail = s;
    }
    return head;
}

void printList(Student *head) {
    printf("学生名单：\n");
    while (head) {
        printf("%s\n", head->name);
        head = head->next;
    }
}

int main() {
    int n;
    printf("输入学生人数：");
    scanf("%d", &n);
    Student *head = createList(n);
    printList(head);
    return 0;
}