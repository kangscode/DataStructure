#include<stdio.h>

//--- ������ ---
//	������ ������ �ּҸ� �������ִ� ����
//	������ ���� ���� ���: ������ ������ �ڷ��� *(�ֽ�Ÿ����ũ)������;
//	������ ���� �ȿ� ����� �ּҷ� �����ؼ� �ּ� ���� ���� Ȯ���� ����
//	*������ ����  �������� Ȯ���� �� �ִ�. �̸� ��������� �θ���.
//  ������ ������ �Ϲ� ������ �ּҸ� ������ �� �ְ�, 
//	���� ������ ������ ������ ������ �ּҸ� ������ �� �ְ�, 
//	���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�,
//	���� ������ ������ ���� ������ ������ �ּҸ� ������ �� �ְ�,
//

int main()
{
	int num = 5;	// int - ����
	int* ptr;	// int* - int�ڷ����� ���� ������ �ּ�
	int** dptr;
	int*** tptr;

	ptr = &num;
	dptr = &ptr;
	tptr = &dptr;

	printf("num�� �ּ� : %p\n", &num);
	printf("ptr�� �� : %p\n", ptr);

	printf("num�� �� : %d\n", num);
	printf("ptr�� �̿��� num�� �� : %d\n", *ptr);
	printf("dptr�� �̿��� num�� �� : %d\n", **dptr);
	printf("tptr�� �̿��� num�� �� : %d\n", ***tptr);

	printf("ptr�� �ּ� : %p\n", &ptr);
	printf("dptr�� �� : %p\n", dptr);

	printf("dptr�� �ּ� : %p\n", &dptr);
	printf("tptr�� �� : %p\n", tptr);


	int n;
	int* p;
	p = &n;
	scanf("�Է�: %d", p);
	printf("���: %d\n", n);


	return 0;
}