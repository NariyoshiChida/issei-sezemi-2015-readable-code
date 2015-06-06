//
//  main.cpp
//  assignment1
//
//  Created by Takarada issei on 2015/06/06.
//  Copyright (c) 2015年 Takarada issei. All rights reserved.
//

#include <bits/stdc++.h>

#define PRINT_ALL -1

using namespace std;

void insertWords(ofstream &recipe_file){
    recipe_file.open("recipe-data.txt");
    recipe_file<<"オムライス"<<endl;
    recipe_file<<"親子丼"<<endl;
    recipe_file<<"杏仁豆腐"<<endl;
}

void initFile(fstream &data_file){
    data_file.open("recipe-data.txt");
    
    if (!data_file) {
        cout<<"ファイルをオープンできません"<<endl;
        exit(0);
    }
}

void printRecipeWithCookpadsURL(ifstream &input_file,string &filename){

  input_file.open(filename.c_str());

  if( !input_file ) {
    cout<<"ファイルをオープンできません"<<endl;
    exit(0);
  }

  int identifier = 1;
  string words;
  while( !( input_file >> words ).fail() ){
    cout << words << " http://cookpad.com/search/" << words << endl;
    ++identifier;
  }
  
}


int main(int argc, const char * argv[]) {
    
    fstream data_file;
    initFile(data_file);
    
    ofstream recipe_file;
    insertWords(recipe_file);

    assert( argc >= 2 );
    string filename = string(argv[1]);

    ifstream input_file;
    printRecipeWithCookpadsURL(input_file,filename);
    
    recipe_file.close();
    data_file.close();
    input_file.close();

}
