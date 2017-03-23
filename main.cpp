#include <iostream>
#include <vector>

using namespace std;

//Potrotypes
vector<int> operar(int);
bool Comprobando(int);


//Aplying ALU operation 
int main()
{
	int n = 13195;
	vector<int> result = operar(n);
	cout << "Factores primos son: "<< "\n";
	for (int i = 0; i < result.size(); i++)
		cout << result.at(i) << endl;

	cin.get();

	return 0;
}
//ALU Operation 
vector<int> operar(int n)
{
	vector<int> operar;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			if (Comprobando(i))
				operar.push_back(i);

	return operar;
}
//Comprobando Operaciones 
bool Comprobando(int n)
{
	int counter = 0;

	for (int i = 1; i < n; i++)
		if (n % i == 0)
			counter++;

	if (counter == 1)
		return true;

	return false;
}

