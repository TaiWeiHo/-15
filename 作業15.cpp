#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int n,s;

printf("�п�J�{�b�ɶ�:");
scanf("%d,%d",&n,&s);

if(n<17 && n>7 && s<=59 && s>=0){
printf("�{�b�O�W�Үɶ��C\n");	
}
else if(n==7 && s<=59 && s>=30){
printf("�{�b�O�W�Үɶ��C\n");	
}
else if(n >= 25 || s >= 60 || s<=-1){
printf("�z��J���O�L�Įɶ��C\n");	
}
else{
printf("�{�b�O��Ǯɶ��C\n");	
}

system("PAUSE");
return 0;
}
