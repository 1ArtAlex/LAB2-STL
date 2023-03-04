#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>v;
    int n;
    cout<<"input vector size: ";
    cin>>n;

    for(int i=0; i<n; i++){  // заполнение контейнера
        v.push_back(i); // добавить элемент в конец контейнера
    }

    for(int i=0; i<v.size(); i++){
        std::cout << "Enter an array element [" << i << "] = ";
        std::cin >> v[i];
    }

    std::cout << "The specified array: ";
    for (int i = 0; i < v.size(); i++){
        std::cout <<  v[i] << " ";
    }
    std::cout << std::endl;


    sort(v.begin(), v.end());

    int x;
    x = 1;
    for (int i = 0; i < n - 1; i++)
        if (v[i] != v[i + 1]) x++;
    cout << x;

    return 0;
}
