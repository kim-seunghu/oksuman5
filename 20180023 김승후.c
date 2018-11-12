#include <stdio.h>
void indexAddMat(int arr1[][3], int arr2[][3], int arr3[][3]);
void ptrProdMat(int arr1[][3], int arr2[][3], int arr3[][3]);

void main()
{
	int Mat_Input1[3][3];
	int Mat_Input2[3][3];

	int Mat_Add[3][3] = { 0,0,0,0,0,0,0,0,0 };
	int Mat_Product[3][3] = { 0,0,0,0,0,0,0,0,0 };

	int i, j;

	printf("ù ��° �迭�� �Է��� 9���� ������ �Է��� �ּ��� : ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &Mat_Input1[i][j]);
		}
	}

	printf("�� ��° �迭�� �Է��� 9���� ������ �Է��� �ּ��� : ");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &Mat_Input2[i][j]);
		}
	}

	printf("\n");
	printf("-------ù ��° �Էµ� �迭�Դϴ�-------\n");
	for (i = 0; i<3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %8d ", Mat_Input1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("-------�� ��° �Էµ� �迭�Դϴ�-------\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %8d ", Mat_Input2[i][j]);
		}
		printf("\n");
	}

	indexAddMat(Mat_Input1, Mat_Input2, Mat_Add);

	printf("\n");
	printf("-------�� �迭�� �� ����Դϴ�-------\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %8d ", Mat_Add[i][j]);
		}
		printf("\n");
	}

	ptrProdMat(Mat_Input1, Mat_Input2, Mat_Product);
	
	printf("\n");
	printf("-------�� �迭�� �� ����Դϴ�-------\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %8d ", Mat_Product[i][j]);
		}
		printf("\n");
	}
}

void indexAddMat(int arr1[][3], int arr2[][3], int arr3[][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

void ptrProdMat(int arr1[][3], int arr2[][3], int arr3[][3])
{
	int i, j, k;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
				*(*(arr3 + i) + j) += *(*(arr1 + i) + k) * *(*(arr2 + k) + j);
		}
	}

}