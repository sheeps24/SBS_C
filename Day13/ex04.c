



#include <stdio.h>




/* 
    typedef
    : ���� �ڷ����� ���ο� �̸��� �ο��ϴ� Ű����
    typedef �����ڷ��� ���ο� �̸�;

    ex) typedef int INT;

        typedef struct ����ü�̸�{

        } ������ �̸�


    ����ü ����

*/

// ����ü ���ǿ� ���ÿ� typedef ����
typedef struct {
    int x;
    int y;
}   POINT;

// ����ü ���� 
struct person {
    char name[30];
    int age;
};

typedef struct person PERSON;

int main(void) {

    POINT position = {30,40};

    PERSON p = {"��, 10"};

    printf("(x,y) = (%d, %d)\n", position.x, position.y);
    printf("%s : %d\n", p.name, p.age);


    return 0;
}