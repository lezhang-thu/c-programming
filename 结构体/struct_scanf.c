#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

struct student {
    long studentID;
    char studentName[10];
    char studentGender;
    struct date birthday;
    int score[4];
};

int main(void) {
    struct student stu1, stu2;
    /*
100310121
王刚
M
1991 5 19
72 83 90 82
    */

    scanf("%ld", &stu1.studentID);
    scanf("%s", stu1.studentName);
    fflush(stdin);
    scanf("%c", &stu1.studentGender);
    scanf("%d", &stu1.birthday.year);
    scanf("%d", &stu1.birthday.month);
    scanf("%d", &stu1.birthday.day);

    int k;
    for (k = 0; k < 4; k++) scanf("%d", &stu1.score[k]);

    stu2 = stu1;
    printf("&stu2 = %p\n", &stu2);
    printf("%10ld%8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n", stu2.studentID,
           stu2.studentName, stu2.studentGender, stu2.birthday.year,
           stu2.birthday.month, stu2.birthday.day, stu2.score[0], stu2.score[1],
           stu2.score[2], stu2.score[3]);
    return 0;
}
