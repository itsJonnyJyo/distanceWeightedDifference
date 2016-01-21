#include <iostream>
#include <vector>

using namespace std;

double abs(double d){
	if (d < 0) return d*-1;
	else return d;
}

double DWD(double a1, double a2, double i, double j){
	return abs(a1 - a2) / abs(i - j);
}

double getMaxDWD(vector<double> values){
	double max = -1;
	for (int i = 0; i < values.size(); i++){
		for (int j = 0; j < values.size(); j++){
			double d = DWD(values[i], values[j],
				i, j);
			if (d > max){
				max = d;
			}
		}
	}
	return max;
}

int main(){
	vector<double> values;
	values.push_back(8);
	values.push_back(12);
	values.push_back(7);
	values.push_back(-4);
	values.push_back(12);
	values.push_back(-27);
	values.push_back(20);
	values.push_back(14);
	values.push_back(57);
	values.push_back(100);

	double max = getMaxDWD(values);

	cout << "Max is: " << max << endl;

	return 0;
}