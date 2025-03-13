#include <iostream>
#include <string>
using namespace std;

int arr[15];                
int n;                      

void input() {              
    while(true) {
        cout << "Masukkan jumlah data : ";  
        cin >> n;           
        if (n <= 15)        
            break;          
        else{
            cout << "\nArray dapat mempunyai maksimal 15 data\n" << endl;
        }
    }


cout << endl;
cout << "=====================" << endl;
cout << "Masukkan data" << endl;
cout << "=====================" << endl;

for (int i = 0; i <n; i++){                         
    cout << "Data ke-" << (i+1) << ";";
    cin >> arr[i];
}

}

void bubbleSortArray(){
    int pass = 1;                                   

    do 
    {
        for (int j = 0; j <= n -1-pass;j++){        

            if (arr[j] > arr[j + 1] )               
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] + temp;
            }  

        }

        pass = pass + 1;                            

    }while (pass <= n - 1);                         
}

void display (){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Data Setelah Diurutkan" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j];                             
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << endl;               
    cout << endl;
    cout << endl;

}

int main(){

    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}