#include <iostream>
using namespace std;

int adhitya[144];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Masukan data adhitya: ";
		cin >> n;
		if ((n > 0) && (n <= 144))
			break;
		else
			cout << "\nData adhitya min 0 max 39.\n\n";
	}
	// Accept array elements
	cout << "\n--------------------\n";
	cout << " Masukan data adhitya \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> adhitya[i];
	}
}


void BinerySearch() {

	char ch;

	do
	{
		// Accept the number to be searched
		cout << "\nMasukan data adhitya untuk dicari: ";
		int item;
		cin >> item;

		int adhitya = 0;
		int wibowo = n - 1;
		int mid; bool found = false;

		while (adhitya <= wibowo)
		{
			int mid = (adhitya + wibowo) / 2;
			if (adhitya[mid] == item) {
				found = true;
				break;

			}
			else if (adhitya[mid] < item) {
				adhitya = mid + 1;
			}
			else {
				wibowo = mid - 1;
			}
		}
		if (found)
		{
			cout << "\nitem<<" "found at postion" << (mid + 1) << endl;
		}
		else {
			cout << "\n" << item << " tidak ada data dalam andi\n";
		}
		cout << "\ncontinue search (y/n): ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');

}



int main()
{
	input();
	BinerySearch();
}