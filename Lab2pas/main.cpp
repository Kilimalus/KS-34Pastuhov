#include <iostream>
#include <ctime>

using namespace std;

void matrix_umnoj(double** ,double** ,double** ,int);

int main (){
  unsigned int N;
  int i, j;
  cout << "Vvedite chislo N=";
  cin >> N;
  cout << endl << endl;
  srand (time (0));

  double **A = new double*[N];
  double **B = new double*[N];
  double **C = new double*[N];

  for (i = 0; i < N; i++)
    {
      A[i] = new double[N];
      B[i] = new double[N];
      C[i] = new double[N];
    }


  for (i = 0; i < N; i++)
    {
      for (j = 0; j < N; j++)
	{
	  A[i][j] = (double) (rand ()) / RAND_MAX * (10 - 0) + 0;
	  B[i][j] = (double) (rand ()) / RAND_MAX * (10 - 0) + 0;
	  C[i][j] = 0;
	}

    }

  matrix_umnoj (A, B, C, N);

  for (i = 0; i < N; i++){
      for (j = 0 ; j < N; j++){
        cout << A[i][j] << "\t" ;
      }
        cout << "\t\t";
      for (j = 0 ; j < N; j++){
          cout << B[i][j] << "\t" ;
      }
        cout << "\t\t";
      for (j = 0 ; j < N; j++){
          cout << C[i][j] << "\t" ;
      }
        cout << "\t\t";
      cout << "\n\n";
	}

  if (N == 4) {

    double det1 = (C[1][1] * ((C[2][2] * C[3][3])-(C[2][3] * C[3][2])))-
                  (C[1][2] * ((C[2][1] * C[3][3])-(C[2][3] * C[3][1])))+
                  (C[1][3] * ((C[2][1] * C[3][2])-(C[2][2] * C[3][1])));


    double det2 = (C[1][0] * ((C[2][2] * C[3][3])-(C[2][3] * C[3][2])))-
                  (C[1][2] * ((C[2][0] * C[3][3])-(C[2][3] * C[3][0])))+
                  (C[1][3] * ((C[2][0] * C[3][2])-(C[2][2] * C[3][0])));


    double det3 = (C[1][0] * ((C[2][1] * C[3][3])-(C[2][3] * C[3][1])))-
                  (C[1][1] * ((C[2][0] * C[3][3])-(C[2][3] * C[3][0])))+
                  (C[1][3] * ((C[2][0] * C[3][1])-(C[2][1] * C[3][0])));


    double det4 = (C[1][0] * ((C[2][1] * C[3][2])-(C[2][2] * C[3][1])))-
                  (C[1][1] * ((C[2][0] * C[3][2])-(C[2][2] * C[3][0])))+
                  (C[1][2] * ((C[2][0] * C[3][1])-(C[2][1] * C[3][0])));

    double det = ((C[0][0] * det1)-(C[0][1] * det2)+(C[0][2] * det3)-(C[0][3] * det4));

    cout  << "Determinant_C=\t" << det << "\t\n";
  }

else {

   cout << "\noshibka_podscheta_determinanta_C\n";

}




  for (i = 0; i < N; i++)
    {
      delete[]A[i];
      delete[]B[i];
      delete[]C[i];
    }
  delete[]A;
  delete[]B;
  delete[]C;
  return 0;
}


void matrix_umnoj (double **A, double **B, double **C, int N){
  int i, j, k;
  for (i = 0; i < N; i++){
      for (j = 0; j < N; j++){
          for (k = 0; k < N; k++){
              C[i][j] += A[i][k] * B[k][j];

           }
       }
   }
}



