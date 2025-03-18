#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <numbers> 
const int a= 1;
const int b = 5;
const int c=-1;
const int d = 2;
double AB_to_CD(double v){
  return  ((v - a) * (d - c) / (b - a)) + c;

}

int main()
{

    std::string filename = "data.txt";
    std::string filename_out = "result.txt";
    std::ifstream ifs(filename);
	std::cout<<std::setprecision(16)<<std::scientific;
	std::ofstream myfile(filename_out);	 
	myfile << std::scientific << std::setprecision(16);
	if (ifs.is_open() || myfile.is_open())
	{
	while(!ifs.eof()) 
	{		
		double temp;
		ifs >> temp; 
		std::cout <<  temp << " - ";
		myfile << AB_to_CD(temp)<< "\n";
		std::cout << AB_to_CD(temp) <<"\n";
	}
	myfile.close();
	}
	return 0;
}
