#include <iostream>

using namespace std;

int main(){

   //Mendeklarasikan variabel a, b
    int a, b, c;
    b=5;
    
    cout << " a = " ; cin>>a;
	cout << " c = " ; cin>>c;
    
    //jelaskan kondisi sebelum b ditambah variabel c
    cout<<"Nilai sebelum variabel b ditambah c" <<endl;
    cout<<"alamat a  : "<<&c<<endl;
    cout<<"alamat b  : "<<&c<<endl;
    cout<<"nilai a : "<<a<<endl;
    cout<<"nilai b : "<<a<<endl;

     //jelaskan kondisi setelah b ditambah variabel c
    cout<<"Nilai setelah variabel b ditambah c" << endl;
    cout<<"alamat a  : "<<&c<<endl;
    cout<<"alamat b  : "<<&c<<endl;
    cout<<"nilai a : "<<a+c<<endl;
    cout<<"nilai b : "<<a+c<<endl;
    cout<<endl;
 	
    return 0;
}
