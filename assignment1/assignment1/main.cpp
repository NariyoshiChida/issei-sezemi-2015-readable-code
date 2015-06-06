//
//  main.cpp
//  assignment1
//
//  Created by Takarada issei on 2015/06/06.
//  Copyright (c) 2015年 Takarada issei. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

void insertWords(ofstream &recipe_file){
    recipe_file.open("/Users/issei/issei-sezemi-2015-readable-code/recipe-data.txt");
    recipe_file<<"オムライス"<<endl;
    recipe_file<<"親子丼"<<endl;
    recipe_file<<"杏仁豆腐"<<endl;
}

void initFile(fstream &data_file){
    data_file.open("/Users/issei/issei-sezemi-2015-readable-code/recipe-data.txt");
    
    if (!data_file) {
        cout<<"ファイルをオープンできません"<<endl;
        exit(0);
    }

}


int main(int argc, const char * argv[]) {
    
    fstream data_file;
    initFile(data_file);
    
    ofstream recipe_file;
    insertWords(recipe_file);
    
    recipe_file.close();
    data_file.close();
}