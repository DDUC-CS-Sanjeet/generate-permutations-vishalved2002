#include<iostream>
using namespace std;
void permutations(char str [], int i, int n)
{
    // base condition
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }

    // process each character of the remaining string
    for (int j = i; j < n; j++)
    {
        // swap character at index i with current character
        swap(str[i], str[j]);        // STL swap() used

        // recur for string [i+1, n-1]
        permutations(str, i + 1, n);
        // backtrack (restore the string to its original state)
        swap(str[i], str[j]);
    }
}
int main()
{
	int num = 0;
	cout<<"Enter the number of character for calculating permutations.";
	cin>>num;
	char a = 'A';
	char arr[num];
	for(int i=0; i<num;i++)
	{
		arr[i]=a;
		a=a+1;
	}
	permutations(arr, 0, num);
	
	return 0;
}
