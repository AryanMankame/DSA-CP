#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node* arr[26];
    bool flag = false;
    bool contains(char c){
        return arr[c-'a'] != NULL;
    }
    bool insert(char c){
        arr[c-'a'] = new Node();
    }
    void setFlag(){
        flag = true;
    }
    Node* getNext(char c){
        return arr[c-'a'];
    }
}
void add(Node* root,string word){
    Node* temp = root;
    for(int i=0;i<word.size();i++){
        if(temp->arr[word[i]-'0'] == NULL){
            temp->insert(word[i]);
            temp = temp->getNext();
        }
        if(i == word.size()-1) temp->setFlag();
    }
}
bool search(Node* root,string word,int i){
    if(i >= word.size()) return false;
    if(root->flag == true) return true;
    if(root->arr[word[i]] == NULL)
    return search(root->arr[word[i]],word,i+1);
    else return false;
}
int main(){
    vector<string>s;
    int n; cin >> n;
    for(int i=0;i<n;i++) {
        string t; cin >> t; s.push_back(t);
    }
    Node* root = new Node();
    for(auto i:s) add(root,i);
    cout << search(root,"hello") << endl;
}