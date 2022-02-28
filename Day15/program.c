
// 헤더 파일 포함
#include <stdio.h>
#include <string.h>

#define MAX_LEN 10    // 선택 음료 최대 갯수
#define True 1
#define False 0


// 메뉴 번호
#define Add 1
#define Remove 2
#define Check 3
#define Order 4
#define End 0        // 프로그램 종료

// 음료 상품 코드
#define Americano 1 
#define Cafelatte 2
#define Juice 3
#define Icecream 4
#define Cancel 0


// 음료 상품 가격
#define Americano_Price 2000 
#define Cafelatte_Price 3000
#define Juice_Price 3500
#define Icecream_Price 4000

// 선택 음료 구조체
typedef struct{
    char *foods[MAX_LEN];     // 상품 목록(최대 10개)
    int idxOfFoods;            // 상품 번호
    int totalPrice;           // 전체 가격
} ItemList;

// 함수 선언
void select();                               // 메인 메뉴
void sshowMenu();                            // 음료 메뉴
void addMenu(ItemList *itemList);            // 음료 추가
void addMenuProcess(ItemList *itemList, char* menu, int price);                    // 음료 추가 처리
int removeItem(ItemList *itemList, char* itemToRemove);                            // 음료 삭제
void removeMenu(ItemList *itemList);                                               // 삭제 항목 선택
void removeMenuProcess(ItemList *itemList, char *itemToRemove, int removePrice );  // 음료 삭제 처리
void checkMenu(ItemList*itemList);                                                 // 메뉴 확인
int order(ItemList*itemList);                                                      // 주문



/* main 함수
1. 변수 선언 및 초기화
2. 메인메뉴 출력
3. 메인번호 입력
4. 메뉴 선택
5. 선택된 메뉴의 함수 호출
    1 > 추가
    2 > 삭제
    3 > 선택 확인
    4 > 주문
    0 > 종료
*/

int main(void) {

    // 변수 선언 및 초기화
    ItemList itemlist;
    itemlist.idxOfFoods = 0;
    itemlist.totalPrice = 0;
    int choice;


    while (1){
        // 메인 메뉴 출력
        select();

        printf("메뉴 번호 : ");
        scanf("%d", &choice);
    

        // 메뉴 선택
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
                            puts("주문 완료!\n 음료를 준비");
                            puts("기다려 주세요");
                            printf("\n\n");               
                        }
                        else{
                            puts("주문 보류");
                            printf("\n\n");
                        }                        
                        printf("\n\n");
                        break;
            case End:
                        // 함수 호출
                        puts("프로그램 종료");
                        break;
            default :
                        puts("(0~4)번의 숫자 입력");
                        break;

        }

    }
    return 0;
}

/*
    메뉴 관련 함수 정의
    1. 메인 메뉴   
        - 함수 이름 : select()
        - 기능 : 최초 메뉴를 출력함수
    
    
    2. 음료 메뉴
        - 함수 이름 : showMenu()
        - 기능 : 주문할 수 있는 메뉴를 출력함수  

    -----------------------------------------
    음료 추가 함수 정의
     - 함수이름 : addMenu(itemList * ititemList)
     - 기능 : 사용자가 추가할 음료를 선택하면,
              - itemList 구조체의 멤버 배열에 해당 음료 추가
              - 음료수 총 개수를 1 증가
              - 해당 음료수의 가격을 전체 가격에 더함 

    음료 추가 처리 함수 정의
     - 함수 이름 : addMenProcess(itemList * ititemList, char* menu, int price)
     - 기능 : 음료 추가 처리 
*/




// 메뉴 관련 함수 정의
void select() {
    // 메인 메뉴를 출력하는 함수
    puts(" ******** 카페 ********");
    puts(" **** 1. 음료 추가");
    puts(" **** 2. 음료 삭제");
    puts(" **** 3. 음료 선택 확인");
    puts(" **** 4. 음료 주문");
    puts(" **** 0. 프로그램 종료");
    puts(" **********************");
    
}


void showMenu() {
    // 주문할 수 있는 메뉴를 출력하는 함수
    puts(" ***************************");
    puts(" **** 1. 아메리카노 (2000");
    puts(" **** 2. 카페라떼(3000)");
    puts(" **** 3. 주스(3500)");
    puts(" **** 4. 아이스크림 (4000)");
    puts(" **** 0. 취소");
    puts(" ***************************");
}

// 음료 추가
void addMenu(ItemList *itemList){
    /*
     - 함수이름 : addMenu(itemList * ititemList)
     - 기능 : 사용자가 추가할 음료를 선택하면,
              - itemList 구조체의 멤버 배열에 해당 음료 추가
              - 음료수 총 개수를 1 증가
              - 해당 음료수의 가격을 전체 가격에 더함 
    */

   // 음료수는 최대 10개 까지 제한
   if( ItemList->idxOfFoods>=MAX_LEN){
       puts("더 이상 추가 불가");
       return ;
   }

    int choice;
    int i;
    // 음료 메뉴 출력
    showMenu();
    printf("메뉴 번호 : ");
    scanf("%d", &choice);


    switch (choice){
            case Americano:
                        addMenuProcess(itemList, "아메리카노", Americano_Price);
                        break;
            case Cafelatte:
                        addMenuProcess(itemList, "카페라떼", Cafelatte_Price);
                        break;
            case Juice:
                        addMenuProcess(itemList, "주스", Juice_Price); 
                        break;
            case Icecream:
                        addMenuProcess(itemList, "아이스크림", Icecream_Price); 
                        break;
            case Cancel:
                        puts("취소"); 
                        break;            
            default:
                        puts("잘못된 입력");
                        break;
    }


}

// 음료 추가 처리 함수
void addMenuProcess(ItemList *itemList, char* menu, int price){
    int i;
    printf("%s 추가", menu);
    i = itemList -> idxOfFoods;    
    itemList -> foods[i] = menu;
    itemList -> idxOfFoods++;
    itemList -> totalPrice += price;

}
// 삭제
// - 구조체 멤버 배열에서 항목을 삭제


/* 음료 삭제 함수 정의
    이름 : void removeItem(ItemList *itemList, char* itemToRemove)
    기능 : 사용자가 삭제할 음료를 선택하면,
          itemList 구조체의 멤버 배열에서 해당 음료를 삭제

*/
void removeItem(ItemList *itemList, char* itemToRemove){
    int i, rmIdx = -1;  // 삭제할 인덱스
    // 삭제할 음료 이름과 배열의 음료 이름이 같은지 확인
    for ( i = 0; i < itemList-> idxOfFoods; i++){
        if (!strcmp(itemList -> foods[i], itemToRemove)){
            rmIdx = i;
            break;
        }
    } 
}

printf("삭제할 rmIdx : %d", rmIdx);

// 삭제할 항목이 있으면,
if ( rmIdx >= 0){
    // 뒤에서부터 삭제 항목이 있는 요소까지 하나씩 앞으로 당긴다. 
    for ( i = rmIdx; i < itemList->idxOfFoods - 1; i++ ){
        itemList->foods[i] = itemList->foods[i+1];
    }

    if (rmIdx == 0 && itemList->idxOfFoods){
        itemList->foods[0] = NULL;
    }

    printf("%s 를 삭제했습니다.\n ", itemToRemove);
    return True;
    
}

else{
    // 삭제할 항목이 없다면
    printf("삭제할 항목 없음.\n");
    return False;

}

// 삭제 항목 선택 함수
void removeMenu(ItemList *itemList){
    /*
    삭제항목 선택 함수 정의
    이름 : void removeMenu(itemList *itemList)
    기능 : 사용자가 삭제할 음료를선택하면, 
           - 음료가 하나도 선택되지 않은 경우 -> "더 이상 삭제할 수 없음"
           - 존재한다면 (삭제가능) -> removeitem() 함수를 호출하여 삭제 요청    
*/
    if (itemList->idxOfFoods <= 0){
        puts("더 이상 삭제 안됨");
        return;
    }

    int choice;
    showMemu();         
    printf("메뉴 번호 : ");
    scanf("%d", &choice);

    switch (choice){
            case Americano:
                        removeMenuProcess(itemList, "아메리카노", Americano_Price);
                        break;
            case Cafelatte:
                        removeMenuProcess(itemList, "카페라떼", Cafelatte_Price);
                        break;
            case Juice:
                        removeMenuProcess(itemList, "주스", Juice_Price); 
                        break;
            case Icecream:
                        removeMenuProcess(itemList, "아이스크림", Icecream_Price); 
                        break;
            case Cancel:
                        puts("취소"); 
                        break;            
            default:
                        puts("잘못된 입력");
                        break;
    }

}


/*
    음료 삭제 처리 함수정의
    이름 : void removeMenuProcess(ItemList *itemList, char *itemToRemove, int remove removePrice )
    기능: 삭제할 음료의 이름에 맞게 removeitem() 함수를 호출하여 삭제 처리
*/


// 음료 삭제 처리 함수
void removeMenuProcess(ItemList *itemList, char *itemToRemove, int removePrice ){
    // 삭제할 음료의 이름에 맞게 removeitem() 함수를 호출하여 삭제 처리
    if (removeItem(ItemList, itemToRemove)){
        // 삭제 되면,
        // - (전체 가격) - (삭제한 음료가격)
        ItemList->totalPrice -= removePrice;
        // - 추가된 음료 개수 -1
        (ItemList->idxOfFoods)--;
    } 

}

/*
    메뉴 확인 함수
    이름: void checkMenu(ItemList*itemList)
    기능: 사용자가 선택한 음료의전체 가격과 목록 출력

    주문함수정의
    이름 : int order(ItemList*itemList)
    기능 : 주문한 전체가격을 출력후, 주문 여부 재확인
    즉, 최종 주문 여부를  
*/

// 메뉴 확인 함수
void checkMenu(ItemList*itemList){
    int i = 0;
    printf("주문 전체 가격 :%d", itemList->totalPrice);
    for (i = 0; i < itemList->idxOfFoods; i++){
        printf("%s \n", itemList->foods[i]);
    }
    printf("\n");
}

// 주문 함수 정의
int order(ItemList*itemList){
    if (itemList->idxOfFoods <= 0) {
        puts("선택할 음료 없음");
        return -1;

    }

    int choice;
    checkMenu(itemList);
    puts("정말 주문?");

    printf("1. 네  2. 아니오 : ");
    scanf("%d", choice);

    if( choice == 1) return True;
    if( choice == 2) return False;
}
