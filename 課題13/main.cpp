#include "Calculation.h"

//�v���g�^�C�v�錾
void SetX(float a, float b);
void SetY(float a, float b);

//�O���[�o���ϐ�
Calculation* p;

//���C���֐�
int main()
{
	p = new Calculation;

	//�C���X�^���X�w�̏���
	SetX(5.0, 10.0);
	p->Disp();

	//�C���X�^���X�x�̏���
	SetY(8.0, 3.0);
	p->Disp();
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