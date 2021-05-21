#include <iostream>

using namespace std;

class Dictionary{
	public:
		string word[500];
		string mean[500];
		string temp;
		int loop= 0;
		
		void addWord(){
			while(1){
				cout<<"Input Text:  ";
				cin>>word[loop];
				
				if(word[loop]=="n"){
					break;
				}
				cout<<"What is the meaning of "<<word[loop]<<"?  :";
				cin>>mean[loop];
				loop++;
				cout<<"Do you want to add another one? If not press n  "<<endl<<endl;
			}
		} 
		
		void editWord(){
			int vsloop;
			string inText;
			
			vsloop=0;
			cout<<"\nInput word : ";
			cin>>inText;
			while (word[vsloop]!="n"){
				if(inText==word[vsloop]){
					cout<<"What is the right meaning of "<<inText<<"? :";
					cin>>mean[vsloop];
					
					cout<<"Edited"<<inText<<" is "<<" : "<<mean[vsloop];
					break;
				}
				vsloop++;
			}
		}
		void viewAll() {
		int valoop=0;
		while(word[valoop]!="n"){
			cout<<word[valoop]<<" :"<<mean[valoop]<<endl;
			valoop++;
		}
}

void viewSpecific(){
	int valoop;
	string inText;
	
	valoop=0;
	cout<<"\nInput word :";
	cin>> inText;
	while(word[valoop]!="n"){
		if(inText==word[valoop]){
			cout<<inText<<" :"<<mean[valoop];
			break;
		}
		valoop++;
		if(word[valoop]=="n "){
			cout<<"Error 404\n"<<inText<<"Not Found"<<endl;
		}
	}
}

};

int main()
{

Dictionary dic;

int i;
while(1){
	cout<<"\nPress 1 to view specific word"<<endl;
	cout<<"Press 2 to view all words"<<endl;
	cout<<"Press 3 to add words"<<endl;
	cout<<"Press 4 to add/edit words"<<endl;
	cout<<"Input: ";
	cin>> i;
	
	switch(i) {
		case 1:
		dic.viewSpecific();
		cout<<endl;
		break;
		case 2:
		cout<<endl;
		dic.viewAll();
		break;
		case 3:
		cout<<endl;
		dic.addWord();
		break;
		case 4:
		cout<<endl;
		dic.editWord();
		break;
	}
}

return 0;

}

