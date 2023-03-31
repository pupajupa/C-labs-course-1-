#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int numInTen;
    int pos1;
    std::cin >> numInTen;
    if (numInTen < 1 || numInTen > 2000000000)
    {
        return 0;
    }
    std::string threeSystem, s;
    while (numInTen >= 3)
    {
        threeSystem += (numInTen % 3) + '0';
        numInTen /= 3;
    }
    threeSystem += (numInTen) + '0';
    reverse(threeSystem.begin(),threeSystem.end());
    s = "10";
    int pos = threeSystem.find(s);
    while (pos != -1) 
    {
        threeSystem.erase(pos, 2);
        threeSystem.insert(pos,"3");
        threeSystem.insert(pos,"0");
        pos = threeSystem.find(s);
    }
    s = "20";
    pos = threeSystem.find(s);
    while (pos != -1) 
    {
        threeSystem.erase(pos, 2);
        threeSystem.insert(pos, "3");
        threeSystem.insert(pos, "1");
        pos = threeSystem.find(s);
    }
    s = "30";
    pos = threeSystem.find(s);
    while (pos != -1) 
    {
        threeSystem.erase(pos, 2);
        threeSystem.insert(pos, "3");;
        threeSystem.insert(pos, "2");
        pos = threeSystem.find(s);
    }
    while (threeSystem[0] == '0') 
    {
        threeSystem.erase(0, 1);
    }
    std::cout << threeSystem;
    return 0;
}