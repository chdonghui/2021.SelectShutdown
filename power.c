#include<stdio.h>
#include<windows.h>
int main(){
	int power;
	printf("��������: 0\n");
	printf("�������: 1\n");
	printf("�ٽý���: 2\n");

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
			printf("�߸� �Է��ϼ̽��ϴ�");
			sleep(3);
			system("cls");
			break;
	}

	
	printf("��û�� �Ϸ�Ǿ����ϴ�\n");
	system("pause");
	return 0;
}
