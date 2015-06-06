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

int main(int argc, const char * argv[]) {
    
    fstream data_file;
    data_file.open("/Users/issei/issei-sezemi-2015-readable-code/recipe-data.txt");
    
    if (!data_file) {
        cout<<"ファイルをオープンできません"<<endl;
        exit(0);
    }
    
    ofstream recipe_file;
    recipe_file.open("/Users/issei/issei-sezemi-2015-readable-code/recipe-data.txt");
    recipe_file<<"オムライス"<<endl;
    
    recipe_file.close();
    data_file.close();
}