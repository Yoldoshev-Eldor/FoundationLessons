#include <iostream>
#include <ctime>
using namespace std;

int main() {


///1-misol



/*
    srand(time(0));

int n;
    cout << " n : ";
    cin>>n;
    int alley[n];
    for(int i =0 ; i<n;++i) {
        alley[i]=rand()%9+1;
        cout << "["<<i<<"] = "<< alley[i]<<endl;

    }

for(int i = n-1; i>=0; --i) {
    cout << alley[i]<<" ";
}
*/






    /*
    int n ;


    int m;

    cout << " N: ";
cin>>n;
cout << " M: ";
cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
        matrix[i][j]=rand()%10;
        }
    }
    cout<< endl;
            for (int i = 0; i < n; ++i){
                for (int j = 0; j < m; ++j) {
                    cout << matrix[i][j] << " ";
                }

        cout << endl;
            }
    int sum=0;
    for (int i = 0; i < n; ++i){
                for (int j = 0; j < m; ++j) {
                sum+=matrix[i][j];
                }
           cout << i << " qator: "<< sum ;
        sum=0;
        cout << endl;
            }

*/



///2-misol






/*
    int n ;


    int m;

    cout << " N: ";
cin>>n;
cout << " M: ";
cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
        matrix[i][j]=rand()%10;
        }
    }
    cout<< endl;
            for (int i = 0; i < n; ++i){
                for (int j = 0; j < m; ++j) {
                    cout << matrix[i][j] << " ";
                }

        cout << endl;
            }
    int maxi=INT_MIN,sum=0,index=0, natija=0;
    for (int i = 0; i < n; ++i){
                for (int j = 0; j < m; ++j) {
                sum+=matrix[i][j];
                    index=i;
                }
        if(maxi<sum) {
            maxi = sum;
            natija = index;
        }
sum = 0;
        cout << endl;
            }
cout << " Yigindi: "<< maxi<< endl;
cout << " index: "<< natija+1<< endl;

*/



    ///3-misol



/*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;
    int maxi=INT_MIN;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
            if(maxi<matrix[i][j]) {
                maxi = matrix[i][j];
            }
        }

        cout << endl;
    }

   cout << " maxI ; "<< maxi<< endl;


*/


///4-misol





    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;
    int mini=INT_MAX;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
            if(mini>matrix[i][j]) {
                mini = matrix[i][j];
            }
        }

        cout << endl;
    }

    cout << " mini ; "<< mini<< endl;
*/




    ///5-misol


    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
            if(maxi<matrix[i][j]) {
                maxi = matrix[i][j];
            }
            if(mini>matrix[i][j]) {
                mini = matrix[i][j];
            }
        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;


    cout << " maxI ; "<< maxi<< endl;
    cout << " mini ; "<< mini<< endl;

    cout << endl;
    cout << endl;
    cout << endl;

    matrix[0][0]=mini;
    matrix[n-1][m-1]=maxi;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }

*/



    ///6-misol



/*
    int n;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
 for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
           if(j%2==1) {
               cout << matrix[i][j] << " ";
           }
            else {
                cout<<"  ";
            }
        }

        cout << endl;
    }

*/














   /// 11-misol



    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;
    cout << endl;

int toq=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j]%2==1) {
                toq++;
            }

        }
        cout<< i << " - Qatorda: "<< toq << " ta toq son bor "<< endl;
        toq=0;
    }
*/




    ///12-misol



/*

    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;

int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
           if(i==j) {

           }

        }


    }

*/





    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            if( j == 0 || j==n-1) {
                sum+=matrix[i][j];            }

        }


    }

    cout << " Natija : "<< sum ;

*/


    //14-misol



    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            if( i==0||j/2 ) {
                sum+=matrix[i][j];            }

        }


    }

    cout << " Natija : "<< sum ;
*/






    //19-misol


/*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            if( i==0 || i+j==n-1 || j == n-1 ) {
                sum+=matrix[i][j];            }

        }


    }

    cout << " Natija : "<< sum ;
*/



    //20-misol



    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            if( j==0||j==matrix[i][j-1] ) {
                sum+=matrix[i][j];            }

        }


    }

    cout << " Natija : "<< sum ;
*/



    //21-misol




    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            if( i==j || i+j == n-1 ) {
                sum+=0;
            }
            else {
                sum+=matrix[i][j];
            }

        }


    }

    cout << " Natija : "<< sum ;
*/



    ///23-misol






    /*
    int n ;


    int m;

    cout << " N: ";
    cin>>n;
    cout << " M: ";
    cin>>m;

    int matrix[n][m] ;
    for (int i = 0; i<n;++i) {
        for (int j = 0 ; j<m; ++j) {
            matrix[i][j]=rand()%90+10;
        }
    }
    cout<< endl;


    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";

        }

        cout << endl;
    }
    cout << endl;

    int sum = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            if( (i+j)%2==1 ) {
            sum+=matrix[i][j];            }

        }


    }

cout << " Natija : "<< sum ;
*/













    }
