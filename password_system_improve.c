#include<stdio.h>
int a;
int b=####; //#位置には好きな数字を指定,setting your own password　to ####
int c=0;
int main(){
  printf("パスワードを入力してください");
  scanf("%d",&a);
  while(a!=b && c<=3 ){
    printf("正しいパスワードを入力してください");
    scanf("%d",&a);
    c++;
  }if(a==b){
  printf("施錠しました\n");
  return 0;}else{
    printf("5回間違えたため終了します\n");
    return 0;
  }
}
