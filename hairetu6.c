#include<stdio.h>

int main()
{
    int num[10];//変数名num要素数[10]の宣言
    int tmp,a,b,c;//変数tmp,a,b,cの宣言
	
    printf("並び替え前 : ");//(並び替え前 : )の出力
    for(a = 0; a < 10; a++)//繰り返し(変数aが0～10未満となるまで)
    {
    scanf("%d",&num[a]);//num[a]の値をキーボードから取得する
	}
	for(b = 0; b < 9; b++)//繰り返し(変数bが0～9未満となるまで)
         {
		for(c = b + 1; c < 10; c++)//繰り返し(変数cがb＋1～10未満となるまで)
                 {
			if(num[b] < num[c])//条件分岐(num[b]がnum[c]より小さい場合)
                        {
        tmp = num[b];//bを保存
        num[b] = num[c];//入替え
        num[c] = tmp;//dにbを戻す
			}
		}
	}
	printf("並び替え後 :");//(並び替え後 : )の出力
	for(a = 0; a < 10; a++)//繰り返し(変数aが0～10未満となるまで)
        {
		printf("% d",num[a]);//num[a]の値を出力する
	}

	return 0;
}
