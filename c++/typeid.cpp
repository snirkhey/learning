#include<iostream>
#include<typeinfo>

using std::cout;

class File
{
	public:
		virtual void open()=0;
		virtual void read()=0;
};
class TextFile:public File
{
	public:
		virtual void open()
		{
			cout<<"TextFile::open";
		}
		virtual void read()
		{
			cout<<"TextFile::read";
		}
};
class BinaryFile:public File
{
	public:
		virtual void open()
		{
			cout<<"BinaryFile::open";
		}
		virtual void read()
		{
			cout<<"BinaryFile::read";
		}
};
int main()
{
	File *f=new TextFile();
        TextFile* tf=new TextFile();
	cout<<"typeid(f)="<<typeid(f).name()<<"\n";
	cout<<"typeid(tf)="<<typeid(tf).name()<<"\n";
	return 0;
}
