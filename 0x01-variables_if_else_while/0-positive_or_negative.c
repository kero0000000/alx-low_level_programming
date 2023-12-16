#include<iostream>
#include<cstdlib>
#include<ctime>
int main(void); 
{
srand(time(nullptr)); 
int n = rand() - RAND_MAX / 2; 
std::cout << "The number " << n << " is ";
if (n > 0) 
std::cout << "n++";
else if (n < 0) 
std::cout << "n--";
else 
std::cout << "zero";
std::cout << std::endl;
return (0);
}
