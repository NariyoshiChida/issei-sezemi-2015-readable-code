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

/*
  curl コマンドを実行して目的のレシピを抽出する
  http://cookpad.com/search/ + (目的のレシピ)　とすることで目的のレシピの一覧が表示される
  curl で先ほどの URL のソースコードを取得し、その中から"http://cookpad.com/recipe/"で始まるものを抽出
  そこで抽出されたコードこそが目的のURLとなる
 */
string searchURL(string word){
  string url = "http://cookpad.com/search/" + word;

  FILE *f = popen(("curl -s -k \"" + url + "\"").c_str(), "r");

  if (f == NULL) {
    perror("error!");
  }
  char buf[1024];
  string text;
  while (!feof(f)) {
    if (fgets(buf, 1024, f) == NULL) break;
    text += (string)(buf);
  }

#ifdef _MSC_VER
  _pclose(f);
#else
  pclose(f);
#endif
  
  int sp = text.find("http://cookpad.com/recipe/");
  assert( sp != string::npos );
  string target = "";
  int cur = sp;
  while( cur < text.size() && text[cur] != '"' ) {
    target += text[cur];
    ++cur;
  }

  return target;
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
    cout << words << " " << searchURL(words) << endl;
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
