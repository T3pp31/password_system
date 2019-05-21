#include<stdio.h>
int a;
int b=####; //####には好きな数字を指定,setting your own password to ####

int main(){
  printf("パスワードを入力してください");
  scanf("%d",&a);
  while(a!=b){
    printf("正しいパスワードを入力してください");
    scanf("%d",&a);
  }
  printf("施錠しました\n");
  return 0;
}
