#include "Calculation.h"

//�v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);

//�O���[�o���ϐ�
Calculation* p;

//���C���֐�
int main()
{
	//�C���X�^���X�w�̏���
	p = new Calculation;
	SetX(5.0, 10.0);
	p->Disp();
	delete p;

	//�C���X�^���X�x�̏���
	p = new Calculation;
	SetY(8.0, 3.0);
	p->Disp();
	delete p;
}

//�C���X�^���X�w�̃A�N�Z�X�֐����Ă�
void SetX(float a, float b)
{
	p->SetA(a);
	p->SetB(b);
}

//�C���X�^���X�x�̃A�N�Z�X�֐����Ă�
void SetY(float a, float b)
{
	p->SetA(a);
	p->SetB(b);
}