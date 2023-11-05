#include<iostream>
#include<math.h>
using namespace std;

void madd(){
int m1[30][30];
int m2[30][30];
int m3[30][30];
int i,j,row,coloumn;

cout<<"ENTER THE NUMBERS OF ROW AND COLUMN"<<endl;
cin>>row>>coloumn;

//input ist matrix
cout<<"entre first matrix "<<row<<" X "<<coloumn<<endl;

for(i=0;i<row;i++){
    for(j=0;j<coloumn;j++){
        cin>>m1[i][j];
    }
}
//input of 2nd matrix
cout<<"entre second matrix "<<row<<" X "<<coloumn<<endl;

for(i=0;i<row;i++){
    for(j=0;j<coloumn;j++){
        cin>>m2[i][j];
    }
}
//calculation
for(i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        m3[i][j]=m1[i][j]+m2[i][j];
    }
}
cout<<"ADDITION OF MATRIX :"<<endl;
for(i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        cout<<m3[i][j]<<"  ";
    }
    cout<<endl;
    }
}
void msub(){
int m1[30][30];
int m2[30][30];
int m3[30][30];
int i,j,row,coloumn;

cout<<"ENTER THE NUBERS OF ROW AND COLUMN"<<endl;
cin>>row>>coloumn;

//input ist matrix
cout<<"entre first matrix "<<row<<" X "<<coloumn<<endl;

for(i=0;i<row;i++){
    for(j=0;j<coloumn;j++){
        cin>>m1[i][j];
    }
}
//input of 2nd matrix
cout<<"entre element of second matrix "<<row<<" X "<<coloumn<<endl;

for(i=0;i<row;i++){
    for(j=0;j<coloumn;j++){
        cin>>m2[i][j];
    }
}
//calculation
for(i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        m3[i][j]=m1[i][j]-m2[i][j];
    }
}
cout<<"SUBBRACTION OF MATRIX :"<<endl;
for(i=0;i<row;i++){
    for(int j=0;j<coloumn;j++){
        cout<<m3[i][j]<<"  ";
    }
    cout<<endl;
}
}
void mmul(){
int m1[30][30];
int m2[30][30];
int m3[30][30];
int row1,column1,row2,column2;
cout<<"entre the row and column of first matrix"<<endl;
cin>>row1>>column1;
cout<<"entre the row and coloumn of second matrix"<<endl;
cin>>row2>>column2;

if(column1 != row2 ){
    cout<<"MATRIXS MULTIPLICATION CAN NOT POSSIBLE FOR FOLLOWING INPUT ): "<<endl;
    return;
}
int i,j,k;
cout<<"entre element of first matrix of "<<row1<<"X"<<column1<<endl;
for( i=0;i<row1;i++){
    for(j=0;j<column1;j++){
        cin>>m1[i][j];
    }
}
cout<<"entre element of first matrix of "<<row2<<"X"<<column2<<endl;
for( i=0;i<row2;i++){
    for(j=0;j<column2;j++){
        cin>>m2[i][j];
    }
}
//calculation
for(i=0;i<row1;i++){
    for(j=0;j<column2;j++){
         m3[i][j] = 0;
            for (int k = 0; k < column1; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
    }
}
//print
cout<<"MULTIPLICATION OF MATRIX:"<<endl;
for(i=0;i<row1;i++){
    for(j=0;j<column2;j++){
        cout<<m3[i][j]<<"  ";
    }
    cout<<endl;
}
}
void mtranspose() {
    int m[30][30];
    int ans[30][30];
    int row, column;

    cout << "ENTER THE ROW AND COLUMN OF MATRIX" << endl;
    cin >> row >> column;

    // Input
    cout << "Enter elements of " << row << "X" << column << " matrix:" <<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> m[i][j];
        }
    }
    // Transpose
    int i,j;
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){
            ans[i][j]=m[j][i];
        }
    }
    //print
    cout<<"TRANSPOSE OF MATIX : "<<endl;
    for(i=0;i<column;i++){
        for(j=0;j<row;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
void mpow(){
    int m[30][30];
    int square[30][30];
    int row,column,i,j;
    int p;
    cout<<"ENTRE THE ROWS AND COLOMS OF MATRIX"<<endl;
    cin>>row;
    cin>>column;
    cout<<"ENTRE MATRIX OF "<<row<<"X"<<column<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cin>>m[i][j];
        }
    }
    cout<<"ENTRE THE POWER OF MATRIX"<<endl;
    cin>>p;
    //calculation
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            // square[i][j]=m[i][j]*m[i][j];
            square[i][j]=pow(m[i][j],p);
        }
    }
    cout<<"MATRIX WITH "<<p<<" power :"<<endl;
      for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cout<<square[i][j]<<" ";
        }
        cout<<endl;
    }
}
void d2x2(){
    int row=2;
    int column=2;
    int m[30][30];
    int i,j,deter;
    cout<<"entre element of "<<row<<"X"<<column<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cin>>m[i][j];
        }
    }
    deter=m[0][0]*m[1][1]-m[0][1]*m[1][0];
    cout<<"DETERMINENT OF THE MATRIX = "<<deter<<endl;
}
void d3x3(){
    int row=3;
    int column=3;
    int m[30][30];
    int i,j,deter;
    cout<<"entre element of "<<row<<"X"<<column<<endl;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cin>>m[i][j];
        }
    }
    deter=m[0][0]*(m[1][1]*m[2][2]-m[1][2]*m[2][1])-m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])+m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
    cout<<"DETERMINENT OF THE MATRIX = "<<deter<<endl;
}
int  main(){
    calc:
    cout<<("  ------------------  MATRIX  CALCULATOR  --------------------  ")<<endl<<endl;
    cout<<"1 = ADDITION OF MATRIX"<<endl;
    cout<<"2 = SUBRACTION OF MATRIX"<<endl;
    cout<<"3 = MULTIPLICATION OF MATRIX"<<endl;
    cout<<"4 = POWER  OF MATRIX "<<endl;
    cout<<"5 = TRANSPOSE OF MATRIX"<<endl;
    cout<<"6 = DETERMINANT OF MATRIX"<<endl<<endl;
    cout<<"ENTRE YOUR CHOICE "<<endl;

    int ichoice;
    cin>>ichoice;    

    switch(ichoice){
    case 1:
    madd();
    break;
    
    case 2:
    msub();
    break;
    
    case 3:
    mmul();
    break;

    case 4:
    mpow();
    break;
    
    case 5:
    mtranspose();
    break;

    case 6:
    cout<<"SELECT SIZE OF SQUARE MATRIX"<<endl;
    cout<<"6.1 = 2X2 square matrix"<<endl;
    cout<<"6.2 = 3X3 square matrix"<<endl;
    
    int c;
    cin>>c;
    switch(c){

        case 1:
        d2x2();
        break;
        
        case 2:
        d3x3();
        break;

        default:
        cout<<"SORRY CAN'T FIND DETERMINENT OF GIVEN INPUT "<<endl;
        break;

    } 
    break;

    default:
    cout<<"INVALID INPUT :( "<<endl;
    break;
    }
    cout<<"Do You Want to Continue PRESS Y "<<endl;
    char ch;
    cin>>ch;
    if(ch=='Y' || ch=='y')
    {
        goto calc;
    }else{
        cout<<"  --------------  GOOD-BYE  --------------  "<<endl;
    }
    return 0;
}