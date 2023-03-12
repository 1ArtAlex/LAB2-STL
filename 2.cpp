#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    size_t const size_v = 6;
    std::vector <std::pair <size_t,std::string> > v(size_v);

    for(size_t i = 0; i < size_v; i++) {
        std::cin >> v[i].first >> v[i].second;
    }
    std::sort(v.begin(),v.end(),[] (std::pair<size_t,std::string> f,std::pair<size_t,std::string> s){
        return f.first < s.first;
    });

    std::cout << std::endl;

    for(size_t i = 0; i < size_v; i++) {
        std::cout << v[i].first << " " << v[i].second << std::endl;
    }
}