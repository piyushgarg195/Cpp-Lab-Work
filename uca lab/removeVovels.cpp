#include <iostream>
using namespace std;

// void removeVovels(char *str){
//     int count=0;
//     int index=1;
//     while(*str!='\0'){
//         if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'){
//            *str =' ';
//             count++;
//         }
//         str++;

//     }

// }

void removeVovels(char str[]){
    int i,j = 0;
    while(str[i]!='\0'){
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
          cout<<str[i];
         }
         i++;
    }
    cout<<str<<endl;
}


int main(){
    char str[40];
    cout<<"Enter a string: ";
    cin>>str;

    int len=0;
    int len2=0;
    while(str[len]!='\0'){
        len++;
    }
len2=len;
    for(int i=0; i<len; i++){
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
             for(int j=i; j<=len; j++){

                        str[j] = str[j+1];


             }
             len--;
         }
    }
    int count2=0;
    while(str[count2]!='\0'){
        count2++;
    }
    count2-=1;
     if(str[count2]=='a'||str[count2]=='e'||str[count2]=='i'||str[count2]=='o'||str[count2]=='u'||str[count2]=='A'||str[count2]=='E'||str[count2]=='I'||str[count2]=='O'||str[count2]=='U'){
     str[count2]=' ';
     }
    cout<<str;


}
