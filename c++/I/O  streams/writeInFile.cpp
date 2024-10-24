#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ofs("My.txt",ios::trunc);
    ofs<<"Ayush"<<endl;
    ofs<<01<<endl;
    ofs<<"CS"<<endl;
    ofs.close();
}
