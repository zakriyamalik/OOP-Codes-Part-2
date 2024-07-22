#include<iostream>
using namespace std;
class set
{
	 int *data; /* pointer to an array of type integers which will be treated as set */
    int capacity; /* maximum possible number of elements that can be stored in the Set */
	int noOfElements; /* number of elements in the Set */
	static int count; //
public:
	set(int cap=0)
	{
		int *data=0;
		int noOfElements=0;
		data=new int [capacity];
		count++;

	}
	set( const set & ref)
	{
		 capacity=ref.capacity;
		noOfElements=ref.noOfElements;
		data=new int [capacity];
		for(int i=0;i<noOfElements;i++)
		{
			data[i]=ref.data[i];
		}count++;
	}
	void reSize (int newcapacity )
	{
		int * newdata=new int [newcapacity];
		if(newcapacity<capacity)
		{
			for(int i=0;i<capacity;i++)
			{
				newdata[i]=data[i];
			}
		}
		else
		{
			for(int i=0;i<newcapacity;i++)
			{
				newdata[i]=data[i];
			}
			cout<<"Enter more data to new array"<<endl;
			for(int i=0;i<newcapacity;i++)
			{
				cin>>newdata[i];
			}
		}
		delete[]data;
		data=newdata;
		capacity=newcapacity;
	}
	static int getobjectcount()
	{
		return count;
	}
   ~set()
   {
	count--;
   }
   void insert(int element)
   {
	   for(int i=0;i<noOfElements;i++)
	   {
	   if(data[i]==element)
	   {
		   return ;
	   }
	   }
	   data[noOfElements]=element;
	   noOfElements++;
   }
   void remove (int element)
   {
	   int temp=0;int i=0;
	   for(;i<noOfElements;i++)
	   {
	   if(data[i]==element)
	   {
		   for(int i=i;i<noOfElements;i++)
		   {
			   temp=data[i];
			   data[i]=data[i+1];
			   data[i+1]=temp;
		   }
	   }
	   }
	   data[i]=-1;
	   //data[noOfElements]=element;
	   noOfElements--;
   }
   int getCardinality() const
   {
	   return noOfElements;
   }
   set calcUnion ( const set & s2 ) const
   {
	   int * arr=new int[this-> noOfElements+s2.noOfElements];int p=0;
	   for(;p<this->noOfElements;p++)
	   {
		   arr[p]=this->data[p];

	   }
	   for(int i=0;i<s2.noOfElements;i++)
	   {
		   for(int j=0;j<this->noOfElements;j++)
		   {
			   if(s2.data[i]==this->data[j])
			   {
				   break;
			   }
			   else
			   {
				   arr[p]=s2.data[i];
			   }
		   }
	   }
	   }
   set calcSymmetricDifference ( const set & s2 ) const
   {
	   int *diff=



   }
};
int set :: count=0;


int main()
{
