#include<stdio.h>
int a;
int b=####; //####には好きな数字を指定,setting your own password to ####

int main(){
  //パスワードを入力する,write password 
  printf("パスワードを入力してください");
  scanf("%d",&a);
  //パスワードの正誤判定,check password
  //正しい数字が入るまで以下の文を繰り返す,Repeat the following statement until you get the correct number
  while(a!=b){
    printf("正しいパスワードを入力してください");
    scanf("%d",&a);
  }
  //成功した場合に表示する,Display on success
  printf("施錠しました\n");
  return 0;
}
