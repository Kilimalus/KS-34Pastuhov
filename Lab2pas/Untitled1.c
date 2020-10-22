
#include <iostream>
#include <ctime>
using namespace std;

struct kompleks{
   int real = 0;
   int kompl = 0;

};

void func(kompleks* , int);
void func(int*, int);


int main()
{
    unsigned int N;
    int i;

    cout<< "Vvedite kol-vo elementov";
    cin>> N;

    int p[N];

  kompleks* chisl = new kompleks [N];

  srand(time(0));
  for ( i = 0; i < N; i++){
     chisl[i].real = 0+rand()%11;
     chisl[i].kompl = 0+rand()%11;
     cout<< "kompl[i] "<<chisl[i].real<<"+i*"<<chisl[i].kompl<<endl;
  }
  for ( i = 0; i < N; i++){
      p[i] = 0+rand()%11;
      cout<< "mass[i]  "<<p[i]<<endl;
  }
func(chisl, N);
func(p, N);
    return 0;
}


void func(kompleks* p , int N){
    kompleks ret;
    for ( int i = 0; i < N; i++){
        ret.real += p[i].real;
        ret.kompl += p[i].kompl;
    }
    cout<< "summkompl="<<ret.real<<"+i*"<<ret.kompl<<endl;
}


void func(int* p , int N){
    int ret = 0;
    for ( int i = 0; i < N; i++){
         ret += p[i];
     }
    cout<< "summ_p="<<ret;
}
