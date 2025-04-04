#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <numbers> 
double AB_to_CD(double);

const int a = 1;
const int b = 5;
const int c=-1;
const int d = 2;
const int _prec = 16;
const std::string filename = "data.txt";
const std::string filename_out = "result.txt";

int main() {
    std::ifstream ifs(filename);
    std::cout << std::setprecision(_prec) << std::scientific;
    std::ofstream myfile(filename_out);
    myfile << std::scientific << std::setprecision(_prec);
    if (ifs.is_open() && myfile.is_open()) {
        double temp = 0.0;
        double sum = 0.0; 
        int count = 0;    
        double mean = 0.0;
        double buff = 0.0;
        while (ifs >> temp) {
            buff = AB_to_CD(temp); 
            sum += buff;
            count++;
            mean = sum / count;
            std::cout << temp << " - " << buff << " - ";
            myfile << mean << "\n";
            std::cout << mean << "\n";
        }
        myfile.close();
    }
    return 0;
}
double AB_to_CD(double v){
  return  ((v - a) * (d - c) / (b - a)) + c;
}


