#include <iostream>
#include <string>
#include <typeinfo>
#include <map>
using namespace std;
int main(){
    map<int,string> ismap;
    ismap[1]="Student";
    ismap[2]="Teacher";
    ismap[3]="Friend";
    map<int,string>::iterator it = ismap.begin();
    while(it != ismap.end()){
        cout<<it->first<<":"<<it->second<<endl;
        it++;

    }

    int my_array[5] = {1, 2, 3, 4, 5};
// 每个数组元素乘于 2
    for (int &x : my_array)
    {
        cout << x <<" "<< typeid(x).name() << endl;
    }
// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型

    return 0;
}