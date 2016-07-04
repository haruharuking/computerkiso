#include<stdio.h>

int main(void)
{
   char a[12][13]={"January","February","March","April","May","June","July","August","September","October","November","December"};//二次元配列名a要素数[12],[13]の宣言
   /*二次元配列名b要素数[12],[15]の宣言*/
   char b[12][25]={"ガーネット","アメシスト","アクアマリン","ダイヤモンド","エメラルド","パール","ルビー","ペリドット","サファイア","オパール","トパーズ","トルコ石"};
   int num1;//変数num1の宣言

   printf("何月ですか＝＞ ");//(何月ですか＝＞)の出力
   scanf("%d",&num1);//num1の値をキーボードから取得する

   printf("%d月のスペルは%sです.\n",num1,a[num1-1]);//(num1月のスペルはa[num1-1])を出力する
   printf("誕生石は %s です.\n",b[num1-1]);//(誕生石はb[num1-1])を出力する

return 0;
}
