//
//  myCopier.cpp
//  
//
//  Created by Jacob Roux on 10/24/21.
//

#include<iostream>
#include<fsstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian"

int main(int argc, char* argv[]){
    string line;
    
    if(argc != 3){
        cout << "Usage is myCopier {file1.txt} {file2.txt}"
        return 2;
    }
    string fileRead(argv[1]);
    string fileWrite(argv[2]);
    string path(FILE_PATH);
    
    cout << endl;
    cout << endl;
    cout << "copying from " << fileRead << " to " << fileWrite << endl;
    
    ifstream in_file {argv[1]};
    ofstream out_file {argv[2]};
    
    if(in_file && out_file){
        while(getline(in_file,line)){
            out_file << line << "\n";
        }
     
        cout << "Copy Finished \n";
     
    } else {
        //Something went wrong
        printf("Cannot read File");
    }
     
    //Closing file
    ini_file.close();
    out_file.close();
     
    return 0;
}
