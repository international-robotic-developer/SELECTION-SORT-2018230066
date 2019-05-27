#include<iostream>
using namespace std;

int main()
{   int a,k,c,d,g;
    k=8;
    int b[8];
    cout<<"Program Selection Sorting"<<endl<<endl;
    cout<<"	*Kelompok 4 Structur Data* "<<endl<<endl;
    cout<<"Nama Anggota"<<endl<<endl;
    cout<<"ilham_al_akhyar(2018230169)"<<endl<<endl;
    cout<<"Steven_Blanco(2018230066)"<<endl<<endl;
    cout<<"Martin_Suhendra(2018230055)"<<endl<<endl;
    cout<<"Togar_Marbun(2018230190)"<<endl<<endl;
    cout<<"Stefanus_Sirait(2018230120)"<<endl<<endl;
    cout<<"Samuel_Marolop(2018230199)"<<endl<<endl;
    cout<<"Gerry_Riyandi(2018230210)"<<endl<<endl;
    cout<<"Aji_fernando(2018230192)"<<endl<<endl;
    
    for(a=0;a<k;a++)
    {
        cout<<"Masukkan nilai "<<a+1<<" : ";cin>>b[a];
    }
    for(a=0;a<k-1;a++)
    {
    c=a;
        for(d=a+1;d<k;d++)
        {
            if(b[c]<b[d])
            {
                c=d;
            }
        }
        g=b[c];
        b[c]=b[a];
        b[a]=g;
    }
    cout<<"\n setelah diurutkan akan menjadi : \n";
    for(a=0;a<k;a++)
    {
        cout<<b[a]<<" \n";
    }
}

