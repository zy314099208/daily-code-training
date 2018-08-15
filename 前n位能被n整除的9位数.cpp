#include <iostream>
using namespace std;
void main()
{
	int a[9];
	int j, num;
	a[4] = 5;
	cout << "the number is: ";
	for (a[0] = 1; a[0] < 10; a[0] += 2)
	{
		for (a[1] = 2; a[1] < 9; a[1] += 2)
		{
			for (a[2] = 1; a[2] < 10; a[2] += 2)
			{
				if (a[2] == a[0])
					continue;
				for (a[3] = 2; a[3] < 9; a[3] += 2)
				{
					if (a[3] == a[1])
						continue;
					for (a[5] = 2; a[5] < 9; a[5] += 2)
					{
						if (a[5] == a[3] || a[5] == a[1])
							continue;
						for (a[6] = 1; a[6] < 10; a[6] += 2)
						{
							if (a[6] == a[4] || a[6] == a[2] || a[6] == a[0])
								continue;
							for (a[7] = 2; a[7] < 9; a[7] += 2)
							{
								if (a[7] == a[5] || a[7] == a[3] || a[7] == a[1])
									continue;
								for (a[8] = 1; a[8] < 10; a[8] += 2)
								{
									if (a[8] == a[6] || a[8] == a[4] || a[8] == a[2] || a[8] == a[0])
										continue;
									num = 0;
									for (j = 0; j < 9; j++)
									{
										num = num * 10 + a[j];
										if (num % (j + 1) != 0)
											break;
									}
									if (j == 9)
										cout << num << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
}
