#include <iostream>
using namespace std ;

class que
{
private:
    int size ;
    int front ;
    int rear ;
    int * Q ;
public:
    que(int size );
    ~que();
    void enque(int x) ;
    void display() ;
    int  dqueue();
};

que::que(int size )
{
    this -> size = size ;
    front = -1 ; 
    rear = -1 ;
    Q = new int(size) ;
}

que::~que()
{
    delete[] Q ;
}

void que::enque(int x )
{
    if(rear == size -1)
    {
        cout<<"stack overflow" ;
    }
    
    else 
    rear ++ ;
    Q[rear] = x ;
}

int  que::dqueue()
{
    if(front == rear )
    cout<<"stack underflow " ;
    
    front++ ;
    int  x =  Q[front] ;
    return x ;

}

void que::display()
{
    for(int i=front+1;i<=rear;i++)
    {
        cout<<Q[i]<<" " ;
    }
}

int main()
{
    int size;
    cin>>size ;
    que a(size) ;
    
    for(int i=0;i<size;i++)
    {
       int x ;
       cin>>x ; 
       a.enque(x) ;
    }

    a.display() ;
    cout<<endl;
    cout<<"deleted value ->  "<<a.dqueue()<<endl;
    a.display() ;


    return 0 ;
}
