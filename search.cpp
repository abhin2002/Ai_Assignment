#include<iostream>
using namespace std;
class search{
    public:
      void linear_search_iterative(int arr[10],int key){
    	int position=-1;
    	for(int i=0;i<=10;i++){
    		if(arr[i]==key){
    			position=i;
    			break;
    		}
    	}
    	if(position==-1){
    	    cout<<key<<" not in the array"<<endl;
    	}else{
    	    cout<<key<<" found at "<<(position+1)<<"th postion"<<endl;
    	}
    }
};

int main(){
    	search A;
    	int key;
	int a[10]={10,9,4,3,2,11,5,7,2,1};
	cout<<"The array = ";
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the key to be searched "<<endl;
	cin>>key;
	cout<<"Result : "<<endl;
	A.linear_search_iterative(a,key);
	return 0;
}

