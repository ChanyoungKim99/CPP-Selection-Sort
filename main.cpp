#include <iostream>

void PrintArray(int input[], int count)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << input[i] << " ";
	}
	std::cout << std::endl;
}

void Swap(int& value1, int& value2)
{
	int temp = value1;
	value1 = value2;
	value2 = temp;
}

// Selection Sort (���� ����)
// ����� �����ϴ� ��İ� ����
// ���� ū �� or ���� ���� �� (Ư����) ���� �� ����

void SelectionSort(int input[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int minIndex = i;	// �׻� ���� ��ġ�� �ּڰ�����
		for (int j = i; j < size; j++)
		{
			if (input[minIndex] > input[j])
			{
				minIndex = j;	// ���� �� �߽߰�, �ε��� �߰�
			}					// for���� ���� �ݺ�, ���� ���� �� ���ϱ�
		}

		if (minIndex != i)
		{
			Swap(input[i], input[minIndex]);		// ���� ���� ���� ��ȯ!
		}
	}
}

// Ot = O (n^2)
// Os = O (n) = int input[] n��
// Sequential Sort�� ������ �Ȱ���..

int main()
{
	const int SIZE{ 5 };
	int array[SIZE]{ 8, 7, 2, 3, 1 };

	SelectionSort(array, SIZE);
	PrintArray(array, SIZE);
}