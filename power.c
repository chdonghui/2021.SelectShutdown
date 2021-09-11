#include<stdio.h>
#include<windows.h>
int main(){
	int power;
	printf("전원끄기: 0\n");
	printf("끄기취소: 1\n");
	printf("다시시작: 2\n");

	scanf("%d", &power);
	
	switch (power){
		case 0:
			system("shutdown -s -t 15");
			system("cls");
			break;
		case 1:
			system("shutdown -a");
			system("cls");
			break;
		case 2:
			system("shutdown -r -t 15");
			system("cls");
			break;
		default:
			printf("잘못 입력하셨습니다");
			sleep(3);
			system("cls");
			break;
	}

	
	printf("요청이 완료되었습니다\n");
	system("pause");
	return 0;
}
