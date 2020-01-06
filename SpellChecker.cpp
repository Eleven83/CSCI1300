#include <iostream>
#include <string>
#include <fstream>
#include "SpellChecker.h"

using namespace std;

SpellChecker::SpellChecker(){

}

SpellChecker::SpellChecker(string doc_language){
    language = doc_language;
}

SpellChecker::SpellChecker(string doc_language, string validFile, string correctFile){
    language = doc_language;
    readValidWords(validFile);
    readCorrectedWords(correctFile);
}

SpellChecker::~SpellChecker(){

}

bool SpellChecker::readValidWords(string validFile){
    ifstream inStream (validFile, ios::in);
    if (!inStream.is_open()){
        return inStream.is_open();
    }
    string line;
    int count=0;
    while(getline(inStream,line)){
        if(line.length()>0){
            validWords[count]=line;
            count++;
        }
    }
    inStream.close();
    return count!=0;
}

bool SpellChecker::readCorrectedWords(string correctFile){
    ifstream inStream (correctFile,ios::in);
    if(!inStream.is_open()){
        return inStream.is_open();
    }
    string line;
    int count=0;
    while(getline(inStream,line)){
        if(line.length()>0){
            count=line.find('\t');
            for(int i=0; i<10000; i++){
                if(incorrectWords[i].length()==0){
                    incorrectWords[i]=line.substr(0, count);
                    correctWords[i]=line.substr(count+1, line.length()-(count+1));
                    break;
                }
            }
        }
    }
    inStream.close();
    return count!=0;
}

bool SpellChecker::setStartMarker(char begin){
    start_marker=begin;
    return true;
}

bool SpellChecker::setEndMarker(char end){
    end_marker=end;
    return true;
}

char SpellChecker::getStartMarker(){
    return start_marker;
}

char SpellChecker::getEndMarker(){
    return end_marker;
}

string SpellChecker::lowerNoPunc(string str){
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

string SpellChecker::repair(string sentence){
    string new_sent;
    string sub;
    int count=0;
    for (int i=0; i<sentence.length(); i++){
        if(sentence[i]!=' '){
            sub=sub+sentence[i];
        }
        if(sentence[i]==' ' || i==sentence.length()-1){
            bool is_valid=false;
            sub=lowerNoPunc(sub);
            for(int j=0; j<10000; j++){
                if(sub==validWords[j]){
                    is_valid=true;
                    break;
                }
            }
            if(is_valid==false){
                bool is_incorrect=false;
                for(int k=0; k<10000; k++){
                    if(sub==incorrectWords[k]){
                        sub=correctWords[k];
                        is_incorrect=true;
                        break;
                    }
                }
                if(is_incorrect==false){
                    sub=start_marker+sub+end_marker;
                }
            }
            if(count==0){
                new_sent=sub;
            }else{
                new_sent=new_sent+" "+sub;
            }
            sub="";
            count++;
        }
    }
    return new_sent;
}
