#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::string str = "1,22232,-3,4,5,6";
    std::vector<int> vect;

    std::stringstream ss(str);

    int i;

    while (ss >> i)
    {
        vect.push_back(i);

        if (ss.peek() == ',')
            ss.ignore();
    }

    sort(vect.begin(),vect.end());
    
	for (i=0; i< vect.size(); i++)
        std::cout << vect.at(i)<<std::endl;
    
}
