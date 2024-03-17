#include<iostream>
using namespace std;
class Array{
    int rows,cols;
    int **a;
public:
    void initialize_size(int,int);
    void declare_array();
    friend void initialize_array(Array&);
    friend void display_array(Array&);
    friend int check_identity(Array&);
    void deallocate_array();
};
void Array::initialize_size(int x,int y)
{
    rows=x;
    cols=y;
}
void Array::declare_array()
{
    a=new int*[rows*cols];
    for(int i=0;i<rows;i++)
    {
       a[i]=new int[cols];
    }
}
void initialize_array(Array& ob1)
{
    cout<<"Enter elements of array:"<<endl;
     for(int i=0;i<ob1.rows;i++)
    {
        for(int j=0;j<ob1.cols;j++)
        {
            cin>>ob1.a[i][j];
        }
    }
}
void display_array(Array& ob1)
{
    for (int i = 0; i < ob1.rows; i++) {
        for (int j = 0; j < ob1.cols; j++) {
            cout << ob1.a[i][j]
                 << " ";
        }
        cout << endl;
    }
}
int check_identity(Array& ob1)
{
    for (int i = 0; i < ob1.rows; i++) {
        for (int j = 0; j < ob1.cols; j++) {
                if(i==j)
                {
                  if(ob1.a[i][j]==1)
                    continue;
                  else
                    return 0;
                }
                else
                {
                    if(ob1.a[i][j]==0)
                        continue;
                    else
                        return 0;
                }
        }
    }
    return 1;
}
void Array::deallocate_array()
{
    delete[] a;
}
int main()
{
    Array a;
    a.initialize_size(3,3);
    a.declare_array();
    initialize_array(a);
    display_array(a);
    if(check_identity(a)==1)
    {
        cout<<"Identity";
    }
    else
    {
        cout<<"Not Identity";
    }
    a.deallocate_array();
}
