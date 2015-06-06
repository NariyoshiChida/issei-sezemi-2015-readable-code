#リーダブルな点

* 処理が関数毎に分割されていて理解しやすい
https://github.com/NariyoshiChida/issei-sezemi-2015-readable-code/blob/master/assignment1/assignment1/main.cpp#L92-L96


* 関数名、変数名の命名規則が明確で理解しやすい
https://github.com/NariyoshiChida/issei-sezemi-2015-readable-code/blob/master/assignment1/assignment1/main.cpp#L15
https://github.com/NariyoshiChida/issei-sezemi-2015-readable-code/blob/master/assignment1/assignment1/main.cpp#L22
https://github.com/NariyoshiChida/issei-sezemi-2015-readable-code/blob/master/assignment1/assignment1/main.cpp#L92
https://github.com/NariyoshiChida/issei-sezemi-2015-readable-code/blob/master/assignment1/assignment1/main.cpp#L95


* 変数名が処理の内容にそっていて理解しやすい
https://github.com/NariyoshiChida/issei-sezemi-2015-readable-code/blob/master/assignment1/assignment1/main.cpp#L15-L20


* ファイルをオープンできない場合の処理が明確で読み易い
https://github.com/NariyoshiChida/issei-sezemi-2015-readable-code/blob/master/assignment1/assignment1/main.cpp#L22-L29


* ファイルのオープンとクローズが同じ関数内で行われていて安心してコードを読める



* argv が const で指定されてあり、途中でファイル名等が変更される心配がなく安心してコードを読める





-------------
仕様5:
以下のコマンドをターミナル上で行い実行する

$ g++ main.cpp
$ ./a.out recipe-data.txt

仕様6:
以下のコマンドをターミナル上で行い実行する

$ g++ main.cpp
$ ./a.out recipe-data.txt

or

$ g++ main.cpp
$ ./a.out recipe-data.txt x

ただし、xは１以上３以下の任意の整数

仕様7:
以下のコマンドをターミナル上で行い実行する

$ g++ main.cpp
$ ./a.out recipe-data.txt
