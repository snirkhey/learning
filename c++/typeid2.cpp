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
void doit(File& f)
{
	if(typeid(f)==typeid(BinaryFile))
	{
		cout<<"doit::got a binary file\n";
	}
	if(typeid(f)==typeid(TextFile))
	{
		cout<<"doit::got a text file\n";
	}
	else
	{
		cout<<"Got neither a Text nor a Binary\n";
	}
        cout<<"typeid.name is "<<typeid(f).name()<<"\n";
}
int main()
{
	TextFile tf;
        doit(tf); 
	return 0;
}
