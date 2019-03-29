#include <iostream>
#include <cstdlib>
#include <iostream>
using namespace std;
int main (int argc, int** argv)
{
	for (int i=0; i < argc; ++i)
		cout << "Argument " << i << " " << " : " << argv[i] << '\n';
	return 0;
}

