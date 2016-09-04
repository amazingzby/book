#include "source.h"

Source::Source()
{
    ifstream fin;
    fin.open("/home/zby/code/C++/Qt/lottery/data.txt",ios::in);
    int length=0;

    if(!fin)//if failed to open the file,release the message.
    {
        cerr<<"Failed to open data.txt"<<endl;
    }
    while(!fin.eof()&&length<=(N-1))
    {
        getline(fin,data[length],'\n');
        length++;
    }
    fin.close();
}

