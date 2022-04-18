#include <stdio.h>   
	int main(){	
	
	printf("숫자 A 입력 : ");
	int inputNumber;
	int inputNumber2;
	scanf("%d", &inputNumber); 
	printf("숫자 B 입력 : ");
	scanf("%d", &inputNumber2); 
	if(inputNumber > inputNumber2){
		printf("큰 숫자는 %d 입니다", inputNumber);
	} else if (inputNumber < inputNumber2) {
		printf("큰 숫자는 %d 입니다", inputNumber2);
	} else  
		printf("두 수는 같습니다");
	
}
