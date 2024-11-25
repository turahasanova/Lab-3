#include <iostream>
using namespace std;

int main(){
	srand(time(NULL));
	int n;
	cout<<"Zehmet olmasa arrayin uzunlugunu daxil edin: \n";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i]=rand()%10+1;
	}
	cout<<"Massivin elementleri: ";
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Tekrarlanan elementler ve onlarin sayi: "<<endl;
	for(int i=0; i<n; i++){
	    int say=1;
	    for(int j=i+1; j<n; j++){
	        if (arr[i] == arr[j]){
	            say++;
	            arr[j]=0;
	        }
	    }
	    if(say>1 && arr[i]!=0 ){
	        cout<<arr[i]<<" -> "<<say<<" defe \n";
	    }
	}
	return 0;
}
