#include <vector>
#include <iostream>

using namespace std;

int freedPrisoners(vector<int> prison) {
	int freed = 0;
	int skip = 0;
	if (prison[0] == 0)
		return 0;
	else
	{
		for (int i = (0 + skip); i < prison.size(); i++)
		{
			if (prison[i] == 1)
			{
				freed++;
				skip = i;
				for (int y = 0; y < prison.size(); y++)
				{
					if (prison[y] == 1)
						prison[y] = 0;
					else if (prison[y] == 0)
						prison[y] = 1;
				}
			}

		}
		return freed;
	}
}

int main()
{
	int x;
	vector<int> cells;
	do {
		cin >> x;
		cells.push_back(x);
	} while (x != -1);

	cout << freedPrisoners(cells);
}
