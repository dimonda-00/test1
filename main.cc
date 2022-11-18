#include "test.hh"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    int a = 88;
    int b = 12;
    int c = add(a, b);
    cout<<"结果是"<<c<<endl;
    //文件输出
    ofstream FileTool;
    string ss;
    ss = "(1, 2)";
    FileTool.open("location_out.txt", std::ios::out | std::ios::app);  //以写入和在文件末尾添加的方式打开.txt文件，没有的话就创建该文件。
    if (!FileTool.is_open()){return 0;}

    FileTool << ss << endl;
    FileTool <<"("<< 5 << "," << 10 << ") \n"  ;//将”(5,10) 回车”写入.txt文件中

    FileTool.close();
    return 0;
}