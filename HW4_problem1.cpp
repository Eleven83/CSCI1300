#include <iostream>
#include <string>
using namespace std;


/*This problem will be comparing and measuring the difference between DNA
sequences*/
//Varsha, I found an example here: http://code.runnable.com/VXND4xg45WxloJ4Z/hamming-distance-for-c%2B%2B;
string humanDNA =
"CGCAAATTTGCCGGATTTCCTTTGCTGTTCCTGCATGTAGTTTAAACGAGATTGCCAG\
CACCGGGTATCATTCACCATTTTTCTTTTCGTTAACTTGCCGTCAGCCTTTTCTTTGAC\
CTCTTCTTTCTGTTCATGTGTATTTGCTGTCTCTTAGCCCAGACTTCCCGTGTCCTTTC\
CACCGGGCCTTTGAGAGGTCACAGGGTCTTGATGCTGTGGTCTTCATCTGCAGGTGTCT\
GACTTCCAGCAACTGCTGGCCTGTGCCAGGGTGCAGCTGAGCACTGGAGTGGAGTTTTC\
CTGTGGAGAGGAGCCATGCCTAGAGTGGGATGGGCCATTGTTCATG";
string mouseDNA =
"CGCAATTTTTACTTAATTCTTTTTCTTTTAATTCATATATTTTTAATATGTTTACTAT\
TAATGGTTATCATTCACCATTTAACTATTTGTTATTTTGACGTCATTTTTTTCTATTTC\
CTCTTTTTTCAATTCATGTTTATTTTCTGTATTTTTGTTAAGTTTTCACAAGTCTAATA\
TAATTGTCCTTTGAGAGGTTATTTGGTCTATATTTTTTTTTCTTCATCTGTATTTTTAT\
GATTTCATTTAATTGATTTTCATTGACAGGGTTCTGCTGTGTTCTGGATTGTATTTTTC\
TTGTGGAGAGGAACTATTTCTTGAGTGGGATGTACCTTTGTTCTTG";
string unknownDNA = "CGCATTTTTGCCGGTTTTCCTTTGCTGTTTATTCATTTATTTTAAACGATATTTATAT\
CATCGGGTTTCATTCACTATTTTTCTTTTCGATAAATTTTTGTCAGCATTTTCTTTTAC\
CTCTTCTTTCTGTTTATGTTAATTTTCTGTTTCTTAACCCAGTCTTCTCGATTCTTATC\
TACCGGACCTATTATAGGTCACAGGGTCTTGATGCTTTGGTTTTCATCTGCAAGAGTCT\
GACTTCCTGCTAATGCTGTTCTGTGTCAGGGTGCATCTGAGCACTGATGTGGAGTTTTC\
TTGTGGATATGAGCCATTCATAGTGTGGGATGTGCCATAGTTCATG";
string endSeq = "*";
int hammingDistance(string string1, string string2){
    int hDist = 0;
    if((string1.length() == string2.length())){

      for(int i = 0; i < string1.length(); i++){
        if((string1[i] == string2[i])){
          hDist++;
        }
      }

    }
    else{
      hDist = -1;
    }
    return hDist;
    }

/*float calcSimilarity (string string1, string string2){
            similarity_score = (string1.length * hDist)/string1.length;

}*/
void listCodonPositions(string string1, string string2){
    string1 = "Test";
    string2 = "T";
    cout << "Test: ";
    listCodonPositions(string1, string2);
    cout << endl;
}

int main(){
    string string1, string2;
    int hDist;
    while(true){
            if (string1 == "*")break;
    cout << "Input First Codon: ";
    cin >> (string1);
    cout << "Input Second Codon: ";
    cin>> (string2);

    hDist = hammingDistance(string1, string2); // get the value
    }

}

