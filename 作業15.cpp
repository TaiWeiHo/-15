#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int n,s;

printf("請輸入現在時間:");
scanf("%d,%d",&n,&s);

if(n<17 && n>7 && s<=59 && s>=0){
printf("現在是上課時間。\n");	
}
else if(n==7 && s<=59 && s>=30){
printf("現在是上課時間。\n");	
}
else if(n >= 25 || s >= 60 || s<=-1){
printf("您輸入的是無效時間。\n");	
}
else{
printf("現在是放學時間。\n");	
}

system("PAUSE");
return 0;
}
