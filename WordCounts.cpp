#include "WordCounts.h"
#include <iostream>
#include <string>

using namespace std;

WordCounts::WordCounts(){

}

WordCounts::~WordCounts(){

}

string WordCounts::lowerNoPunc(string str){
    string new_str;
    for(int i=0; i<str.length(); i++){
        str[i]=tolower(str[i]);
        for(int j=0; j<punc.length(); j++){
            if(punc[j]==str[i]){
                str.erase(i--, 1);
            }
        }
        new_str=str;
        }
    return new_str;
}

void WordCounts::tallyWords(string sentence){
    string new_sent=lowerNoPunc(sentence);
    string strPart;
    for(int i=0; i<new_sent.length(); i++){
        if(new_sent[i]!=' '){
            strPart=strPart+new_sent[i];
        }
        if(new_sent[i]==' ' || i==new_sent.length()-1){
            int thisNum=-1;
            for(int j=0; j<10000 && words[j].length()>0; j++){
                if(strPart==words[j]){
                    counts[j]=counts[j]+1;
                    thisNum=j;
                    break;
                }
            }
            if(thisNum=-1){
                for(int k=0; k<10000; k++){
                    if(words[k].length()==0){
                        words[k]=strPart;
                        counts[k]=1;
                        break;
                    }
                }
            }
            strPart="";
        }
    }
}

int WordCounts::getTally(string word){
    for(int i=0; i<10000; i++){
        if(words[i]==word){
            return counts[i];
        }
    }
}

void WordCounts::resetTally(){
    for(int i=0; i<10000 && words[i].length()>0; i++){
        counts[i]=0;
    }
}

int WordCounts::mostTimes(string xwords[],int xcounts[], int n){
    for(int i=0; i<n; i++){
        int bigI=i;
        for(int j=i+1; j<10000 && words[j].length()>0; j++){
            if(counts[j]>bigI){
                bigI=j;
            }
        }
        if(bigI!=i){
            string bigWords=words[i];
            int bigNum=counts[i];
            words[i]=words[bigI];
            counts[i]=counts[bigI];
            words[bigI]=bigWords;
            counts[bigI]=bigNum;
        }
        xwords[i]=words[i];
        xcounts[i]=counts[i];
    }
    return 0;
}
