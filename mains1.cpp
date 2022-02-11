#include<iostream>
#include<string>
#include "url.h"


int main()
{
    url url("https://www.op.gg/champion/statistics");

    std::cout << url.getScheme() << std::endl;
    std::cout << url.getAuthority() << std::endl;
    std::cout << url.getPath() << std::endl;
    std::cout << url.getFullURL() << std::endl;


}