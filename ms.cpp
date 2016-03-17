#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

int x, y, t, shot, bin;

vector<int> ms(4096);

int main()
{

	ifstream myfile;

	myfile.open("267_2colour_neutral.dat");
	if(myfile.is_open())
	while (myfile >> x >> y >> t >> shot >> bin)
	{
		++ms[t-1];
	}

	myfile.close();

	ofstream outputfile("ms_out");
	
	for (int i = 0; i < ms.size(); ++i)
	{
	outputfile << i << "\t" << ms[i] << endl;
	}
	outputfile.close();

return 0;

}

