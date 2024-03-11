#include <iostream>
#include <cstring>
#include<string>
#include<cctype>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    while(true){
        char choice,menu2;
        cout<<"WELCOME TO SUBSTITUTION CIPHER PROGRAM FOR \n1- encryprion      2- decryption\nPlease select \na)start program \nb)exit program"<<endl;
        cin>>choice;
        choice = toupper(choice);
        cin.ignore();
        cout<<endl;
        if (choice =='A'){


            string plain_alphabet;
            string cipher_alphabets = "";
            string sentence;
            string temp;
            int chr=0,ord=0;
            cout<<"Plain Alphabet :  ";
           for(int i = 97; i <= 122; i++) {
            plain_alphabet.push_back((char)i);
            cout << (char)i;
            temp.push_back((char)i);
        }
            cout<<endl;
            while(true){
            int X=0,y=0,x=0;
            cout<<"cipher key : ";
            getline(cin,cipher_alphabets);
            float sizeC=cipher_alphabets.length();
            for(int i=0;i<sizeC;i++){
            if(!isalpha(cipher_alphabets[i])){
                    x=1;
                cout<<"invalid input :please enter the key in alphabets "<<endl;
                break;
            }
            }
            if (x== 1){
                continue;
            }

            if(sizeC==5){
                    for(int i=0;i<5;i++){
                        for(int j=5;j>=0;j--){
                            if(i!=j&&cipher_alphabets[i]==cipher_alphabets[j]){
                                X=1;
                                break;
                            }
                            if(X==1){
                                break;
                            }
                        }
                        if(X==1){
                            break;
                        }
                    }

                    if(X==0){
                break;
                    }
                    else{
                        cout<<"please enter unique letters!!!!!!!!!!!!!!"<<endl;
                    }
            }
            else{
                cout<<"please enter max letters : 5 letters!!!!!"<<endl;
            }
            }


            float sizeC=cipher_alphabets.length();
            for(int i=0;i<sizeC;i++){
                cipher_alphabets[i]=tolower(cipher_alphabets[i]);
            }
            int sizep=26;
            for(int j=0;j<sizeC;j++){
                for (int i=0;i<sizep;i++){
                    if(cipher_alphabets[j]==plain_alphabet[i]){
                       for (int k = i; k < sizep - 1; k++) {
                            plain_alphabet[k] = plain_alphabet[k + 1];
                        }
                        sizep--;
                        break;
                    }



                }
            }
            cout<<"encryption key: "<<endl<<"origin : ";
            for(int i=0;i<26;i++){
                cout<<temp[i];
            }cout<<endl<<"cipher : ";
             for(int i=sizeC;i<26;i++){
                cipher_alphabets+=plain_alphabet[ord];
                ord++;
             }
            cout<<cipher_alphabets;
            cin.ignore();
            cout<<endl;
            while (true){
                cout<<"choose which function do you want\nA)Encryption\nB)Decryption";
                cin>>menu2;
                menu2 = toupper(menu2);
                cin.ignore();
                cout<<endl;
             if(menu2=='A'){
            cout<<"plain text : ";
            getline(cin,sentence);
            int len=sentence.length();
            for(int i=0;i<len;i++){
               sentence[i]=tolower(sentence[i]);
                if (isalpha(sentence[i])){
                        for(int j=0;j<26;j++){
                            if (sentence[i]==temp[j]){
                                sentence[i]=cipher_alphabets[j];
                                break;
                            }
                        }
                }
            }
            cout<<"cipher text : " ;
            for(int j=0;j<len;j++){
                 cout<<sentence[j];
            }



        cout<<endl<<endl;
        break;
                }
                else if(menu2=='B'){

                cout<<"cipher text : ";
            getline(cin,sentence);
            int len=sentence.length();
            for(int i=0;i<len;i++){
               sentence[i]=tolower(sentence[i]);
                if (isalpha(sentence[i])){
                        for(int j=0;j<26;j++){
                            if (sentence[i]==cipher_alphabets[j]){
                                sentence[i]=temp[j];
                                break;
                            }
                        }
                }
            }
            cout<<"plain text : " ;
            for(int j=0;j<len;j++){
                 cout<<sentence[j];
            }



        cout<<endl<<endl;
        break;
                }
                else{
                    cout<<"please select a valid input"<<endl;
                    continue;
                }
 }
        }

    else if (choice=='B'){
        cout<<"THANK YOU FOR USING MY PROGRAM"<<endl<<setw(60)<<"EXITED";
        break;
    }
    else{
        cout<<"please select a valid input"<<endl;
    }
    }


    return 0;
}
