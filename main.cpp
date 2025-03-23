#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <numbers> 
#include <vector>

double AB_to_CD(double);
double mean_i(const std::vector<double>& arr, int i);

const int a= 1;
const int b = 5;
const int c=-1;
const int d = 2;
const int _prec = 16;
const std::string filename = "data.txt";
const std::string filename_out = "result.txt";


int main()
{
	std::vector<double> vec;
    std::ifstream ifs(filename);
	std::cout<<std::setprecision(_prec)<<std::scientific;
	std::ofstream myfile(filename_out);	 
	myfile << std::scientific << std::setprecision(_prec);
	int i=0;
	if (ifs.is_open() || myfile.is_open())
	{
	while(!ifs.eof()) 
	{	
		vec.resize(++i);
		double temp=0.0;
		ifs >> temp;
		vec[i-1] = AB_to_CD(temp); 
		std::cout <<  temp << " - " << vec[i-1] << " - ";
		myfile<<mean_i(vec,i)<<"\n";
		std::cout <<mean_i(vec,i)<<"\n";
	}
	myfile.close();
	}
	return 0;
}

double AB_to_CD(double v){
  return  ((v - a) * (d - c) / (b - a)) + c;
}

double mean_i(const std::vector<double>& arr, int i){
	double mean=0.0;
	for(size_t k = 0; k<i; k++){
		mean+=arr[k]/i;
	}
	return mean;
}