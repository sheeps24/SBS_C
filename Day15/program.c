
// ��� ���� ����
#include <stdio.h>
#include <string.h>

#define MAX_LEN 10    // ���� ���� �ִ� ����
#define True 1
#define False 0


// �޴� ��ȣ
#define Add 1
#define Remove 2
#define Check 3
#define Order 4
#define End 0        // ���α׷� ����

// ���� ��ǰ �ڵ�
#define Americano 1 
#define Cafelatte 2
#define Juice 3
#define Icecream 4
#define Cancel 0


// ���� ��ǰ ����
#define Americano_Price 2000 
#define Cafelatte_Price 3000
#define Juice_Price 3500
#define Icecream_Price 4000

// ���� ���� ����ü
typedef struct{
    char *foods[MAX_LEN];     // ��ǰ ���(�ִ� 10��)
    int idxOfFoods;            // ��ǰ ��ȣ
    int totalPrice;           // ��ü ����
} ItemList;

// �Լ� ����
void select();                               // ���� �޴�
void sshowMenu();                            // ���� �޴�
void addMenu(ItemList *itemList);            // ���� �߰�
void addMenuProcess(ItemList *itemList, char* menu, int price);                    // ���� �߰� ó��
int removeItem(ItemList *itemList, char* itemToRemove);                            // ���� ����
void removeMenu(ItemList *itemList);                                               // ���� �׸� ����
void removeMenuProcess(ItemList *itemList, char *itemToRemove, int removePrice );  // ���� ���� ó��
void checkMenu(ItemList*itemList);                                                 // �޴� Ȯ��
int order(ItemList*itemList);                                                      // �ֹ�



/* main �Լ�
1. ���� ���� �� �ʱ�ȭ
2. ���θ޴� ���
3. ���ι�ȣ �Է�
4. �޴� ����
5. ���õ� �޴��� �Լ� ȣ��
    1 > �߰�
    2 > ����
    3 > ���� Ȯ��
    4 > �ֹ�
    0 > ����
*/

int main(void) {

    // ���� ���� �� �ʱ�ȭ
    ItemList itemlist;
    itemlist.idxOfFoods = 0;
    itemlist.totalPrice = 0;
    int choice;


    while (1){
        // ���� �޴� ���
        select();

        printf("�޴� ��ȣ : ");
        scanf("%d", &choice);
    

        // �޴� ����
        switch (choice){
            case Add:
                        addMenu(&itemlist);                   
                        printf("\n\n");
                        break;
            case Remove:
                        removeMenu(&itemlist);
                        printf("\n\n");
                        break;
            case Check:
                        checkMenu(&itemlist);
                        printf("\n\n");
                        break;
            case Order:
                        if (order(&itemlist)){
                            puts("�ֹ� �Ϸ�!\n ���Ḧ �غ�");
                            puts("��ٷ� �ּ���");
                            printf("\n\n");               
                        }
                        else{
                            puts("�ֹ� ����");
                            printf("\n\n");
                        }                        
                        printf("\n\n");
                        break;
            case End:
                        // �Լ� ȣ��
                        puts("���α׷� ����");
                        break;
            default :
                        puts("(0~4)���� ���� �Է�");
                        break;

        }

    }
    return 0;
}

/*
    �޴� ���� �Լ� ����
    1. ���� �޴�   
        - �Լ� �̸� : select()
        - ��� : ���� �޴��� ����Լ�
    
    
    2. ���� �޴�
        - �Լ� �̸� : showMenu()
        - ��� : �ֹ��� �� �ִ� �޴��� ����Լ�  

    -----------------------------------------
    ���� �߰� �Լ� ����
     - �Լ��̸� : addMenu(itemList * ititemList)
     - ��� : ����ڰ� �߰��� ���Ḧ �����ϸ�,
              - itemList ����ü�� ��� �迭�� �ش� ���� �߰�
              - ����� �� ������ 1 ����
              - �ش� ������� ������ ��ü ���ݿ� ���� 

    ���� �߰� ó�� �Լ� ����
     - �Լ� �̸� : addMenProcess(itemList * ititemList, char* menu, int price)
     - ��� : ���� �߰� ó�� 
*/




// �޴� ���� �Լ� ����
void select() {
    // ���� �޴��� ����ϴ� �Լ�
    puts(" ******** ī�� ********");
    puts(" **** 1. ���� �߰�");
    puts(" **** 2. ���� ����");
    puts(" **** 3. ���� ���� Ȯ��");
    puts(" **** 4. ���� �ֹ�");
    puts(" **** 0. ���α׷� ����");
    puts(" **********************");
    
}


void showMenu() {
    // �ֹ��� �� �ִ� �޴��� ����ϴ� �Լ�
    puts(" ***************************");
    puts(" **** 1. �Ƹ޸�ī�� (2000");
    puts(" **** 2. ī���(3000)");
    puts(" **** 3. �ֽ�(3500)");
    puts(" **** 4. ���̽�ũ�� (4000)");
    puts(" **** 0. ���");
    puts(" ***************************");
}

// ���� �߰�
void addMenu(ItemList *itemList){
    /*
     - �Լ��̸� : addMenu(itemList * ititemList)
     - ��� : ����ڰ� �߰��� ���Ḧ �����ϸ�,
              - itemList ����ü�� ��� �迭�� �ش� ���� �߰�
              - ����� �� ������ 1 ����
              - �ش� ������� ������ ��ü ���ݿ� ���� 
    */

   // ������� �ִ� 10�� ���� ����
   if( ItemList->idxOfFoods>=MAX_LEN){
       puts("�� �̻� �߰� �Ұ�");
       return ;
   }

    int choice;
    int i;
    // ���� �޴� ���
    showMenu();
    printf("�޴� ��ȣ : ");
    scanf("%d", &choice);


    switch (choice){
            case Americano:
                        addMenuProcess(itemList, "�Ƹ޸�ī��", Americano_Price);
                        break;
            case Cafelatte:
                        addMenuProcess(itemList, "ī���", Cafelatte_Price);
                        break;
            case Juice:
                        addMenuProcess(itemList, "�ֽ�", Juice_Price); 
                        break;
            case Icecream:
                        addMenuProcess(itemList, "���̽�ũ��", Icecream_Price); 
                        break;
            case Cancel:
                        puts("���"); 
                        break;            
            default:
                        puts("�߸��� �Է�");
                        break;
    }


}

// ���� �߰� ó�� �Լ�
void addMenuProcess(ItemList *itemList, char* menu, int price){
    int i;
    printf("%s �߰�", menu);
    i = itemList -> idxOfFoods;    
    itemList -> foods[i] = menu;
    itemList -> idxOfFoods++;
    itemList -> totalPrice += price;

}
// ����
// - ����ü ��� �迭���� �׸��� ����


/* ���� ���� �Լ� ����
    �̸� : void removeItem(ItemList *itemList, char* itemToRemove)
    ��� : ����ڰ� ������ ���Ḧ �����ϸ�,
          itemList ����ü�� ��� �迭���� �ش� ���Ḧ ����

*/
void removeItem(ItemList *itemList, char* itemToRemove){
    int i, rmIdx = -1;  // ������ �ε���
    // ������ ���� �̸��� �迭�� ���� �̸��� ������ Ȯ��
    for ( i = 0; i < itemList-> idxOfFoods; i++){
        if (!strcmp(itemList -> foods[i], itemToRemove)){
            rmIdx = i;
            break;
        }
    } 
}

printf("������ rmIdx : %d", rmIdx);

// ������ �׸��� ������,
if ( rmIdx >= 0){
    // �ڿ������� ���� �׸��� �ִ� ��ұ��� �ϳ��� ������ ����. 
    for ( i = rmIdx; i < itemList->idxOfFoods - 1; i++ ){
        itemList->foods[i] = itemList->foods[i+1];
    }

    if (rmIdx == 0 && itemList->idxOfFoods){
        itemList->foods[0] = NULL;
    }

    printf("%s �� �����߽��ϴ�.\n ", itemToRemove);
    return True;
    
}

else{
    // ������ �׸��� ���ٸ�
    printf("������ �׸� ����.\n");
    return False;

}

// ���� �׸� ���� �Լ�
void removeMenu(ItemList *itemList){
    /*
    �����׸� ���� �Լ� ����
    �̸� : void removeMenu(itemList *itemList)
    ��� : ����ڰ� ������ ���Ḧ�����ϸ�, 
           - ���ᰡ �ϳ��� ���õ��� ���� ��� -> "�� �̻� ������ �� ����"
           - �����Ѵٸ� (��������) -> removeitem() �Լ��� ȣ���Ͽ� ���� ��û    
*/
    if (itemList->idxOfFoods <= 0){
        puts("�� �̻� ���� �ȵ�");
        return;
    }

    int choice;
    showMemu();         
    printf("�޴� ��ȣ : ");
    scanf("%d", &choice);

    switch (choice){
            case Americano:
                        removeMenuProcess(itemList, "�Ƹ޸�ī��", Americano_Price);
                        break;
            case Cafelatte:
                        removeMenuProcess(itemList, "ī���", Cafelatte_Price);
                        break;
            case Juice:
                        removeMenuProcess(itemList, "�ֽ�", Juice_Price); 
                        break;
            case Icecream:
                        removeMenuProcess(itemList, "���̽�ũ��", Icecream_Price); 
                        break;
            case Cancel:
                        puts("���"); 
                        break;            
            default:
                        puts("�߸��� �Է�");
                        break;
    }

}


/*
    ���� ���� ó�� �Լ�����
    �̸� : void removeMenuProcess(ItemList *itemList, char *itemToRemove, int remove removePrice )
    ���: ������ ������ �̸��� �°� removeitem() �Լ��� ȣ���Ͽ� ���� ó��
*/


// ���� ���� ó�� �Լ�
void removeMenuProcess(ItemList *itemList, char *itemToRemove, int removePrice ){
    // ������ ������ �̸��� �°� removeitem() �Լ��� ȣ���Ͽ� ���� ó��
    if (removeItem(ItemList, itemToRemove)){
        // ���� �Ǹ�,
        // - (��ü ����) - (������ ���ᰡ��)
        ItemList->totalPrice -= removePrice;
        // - �߰��� ���� ���� -1
        (ItemList->idxOfFoods)--;
    } 

}

/*
    �޴� Ȯ�� �Լ�
    �̸�: void checkMenu(ItemList*itemList)
    ���: ����ڰ� ������ ��������ü ���ݰ� ��� ���

    �ֹ��Լ�����
    �̸� : int order(ItemList*itemList)
    ��� : �ֹ��� ��ü������ �����, �ֹ� ���� ��Ȯ��
    ��, ���� �ֹ� ���θ�  
*/

// �޴� Ȯ�� �Լ�
void checkMenu(ItemList*itemList){
    int i = 0;
    printf("�ֹ� ��ü ���� :%d", itemList->totalPrice);
    for (i = 0; i < itemList->idxOfFoods; i++){
        printf("%s \n", itemList->foods[i]);
    }
    printf("\n");
}

// �ֹ� �Լ� ����
int order(ItemList*itemList){
    if (itemList->idxOfFoods <= 0) {
        puts("������ ���� ����");
        return -1;

    }

    int choice;
    checkMenu(itemList);
    puts("���� �ֹ�?");

    printf("1. ��  2. �ƴϿ� : ");
    scanf("%d", choice);

    if( choice == 1) return True;
    if( choice == 2) return False;
}
