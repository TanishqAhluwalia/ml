#include<iostream>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#define sqr(n) n*b


using namespace std;

typedef char string[80];
typedef float var;

var m,b,a;


struct train{
 var y,x1,x2,x3;
};

struct func{
 var y,x;
 
};

class atrribute{
    var value;
    static n=0;
    
   publc:
    void get(){cout<<"Enter the value: "; cin>>value;}
    var retval(){return value;}
};


var y(var x){return m*x+b;}

var calc(attribute x)
{
    
    ifstream f("trainset.dat",ios::binary);
    train t;
    var s=0;
    int n=0;

    while(!f.eof()){
      f.read((char*)&t, sizeof(t));
      s+=sqr(y(t.x1)-t.y);
      n++;
    }
    
    s=sqrt(s/n);

}

void main()
{


}
