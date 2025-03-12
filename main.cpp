#include <iostream>
#include <fstream>
//exercise 2
int main()
{
	std::ifstream file("data.txt");
	if(file.fail()){
		std::cerr << " error"<<std::endl;
		return -1;
	}
	std::string tmp;
	std::getline(file,tmp);
	std::cout << tmp << std::endl;
	int val;
    while(file >> val){
//
	}
	
	return 0;
}
