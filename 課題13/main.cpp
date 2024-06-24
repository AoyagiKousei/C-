#include "Calculation.h"

//プロトタイプ宣言
void SetX(float a, float b);
void SetY(float a, float b);

//グローバル変数
Calculation* p;

//メイン関数
int main()
{
	p = new Calculation;

	//インスタンスＸの処理
	SetX(5.0, 10.0);
	p->Disp();

	//インスタンスＹの処理
	SetY(8.0, 3.0);
	p->Disp();
}

//インスタンスＸのアクセス関数を呼ぶ
void SetX(float a, float b)
{
	p->SetA(a);
	p->SetB(b);
}

//インスタンスＹのアクセス関数を呼ぶ
void SetY(float a, float b)
{
	p->SetA(a);
	p->SetB(b);
}