#include <iostream>
#include <string>
#include <vector>
using namespace std;

//連結リストの各ノートを表す構造体
//自己参照構造体
//http://dev.grapecity.co.jp/support/powernews/column/clang/031/page02.htm
struct Node {
  //次がどのノードを指すか？
  Node* next;
  //ノードに付随している値
  string name;

  Node(string name_ = "") : next(NULL), name(name_) { }
};

Node* nil;

void init() {
  nil = new Node();
  //初期状態はnilがnilを指す
  nil -> next = nil;
}

//連結リストの出力
void printList() {
  Node* cur = nil -> next;
  for( ; cur != nil; cur = cur -> next){
    cout << cur -> name << " -> ";
  }
  cout << endl;
}

//ノードpの直後にノードvを挿入
//ノードpのデフォルト引数はnil
//insert(v)を呼び出す操作はリストの先頭への挿入

void insert(Node* v, Node* p = nil){
  v -> next = p -> next;
  p -> next = v;
}

int main(){
  init();

  vector<string> phonetic_code = {
    "alpha",
    "bravo",
    "charlie",
    "delta",
    "echo",
    "fox"
  };

  int i;
  for(i = 0; i < (int)phonetic_code.size(); i++){
    //ノード作成
    Node* node = new Node(phonetic_code[i]);
    //作成したノードを先頭に挿入
    insert(node);
    //各ステップのノードを出力
    cout << "step" << i << ": ";
    printList();
  }
}
