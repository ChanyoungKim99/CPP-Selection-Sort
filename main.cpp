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

// Selection Sort (선택 정렬)
// 사람이 정렬하는 방식과 유사
// 가장 큰 값 or 가장 작은 값 (특정값) 선택 후 정렬

void SelectionSort(int input[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int minIndex = i;	// 항상 현재 위치를 최솟값으로
		for (int j = i; j < size; j++)
		{
			if (input[minIndex] > input[j])
			{
				minIndex = j;	// 작은 값 발견시, 인덱스 추가
			}					// for문을 통해 반복, 가장 작은 값 구하기
		}

		if (minIndex != i)
		{
			Swap(input[i], input[minIndex]);		// 가장 작은 값과 교환!
		}
	}
}

// Ot = O (n^2)
// Os = O (n) = int input[] n개
// Sequential Sort와 성능이 똑같다..

int main()
{
	const int SIZE{ 5 };
	int array[SIZE]{ 8, 7, 2, 3, 1 };

	SelectionSort(array, SIZE);
	PrintArray(array, SIZE);
}