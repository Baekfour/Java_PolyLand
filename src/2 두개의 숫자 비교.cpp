#include <stdio.h>   
	int main(){	
	
	printf("���� A �Է� : ");
	int inputNumber;
	int inputNumber2;
	scanf("%d", &inputNumber); 
	printf("���� B �Է� : ");
	scanf("%d", &inputNumber2); 
	if(inputNumber > inputNumber2){
		printf("ū ���ڴ� %d �Դϴ�", inputNumber);
	} else if (inputNumber < inputNumber2) {
		printf("ū ���ڴ� %d �Դϴ�", inputNumber2);
	} else  
		printf("�� ���� �����ϴ�");
	
}
