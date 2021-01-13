#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	while(1)
	{
	    std::cin >> t;
	    if (t != 42)
	    {
	        std::cout << t << std::endl;
	    }
	    else 
	    {
	        break;
	    }
	}
	return 0;
}
