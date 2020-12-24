#include <iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

class BinaryTree{
public:
    int Maxsize;
    int CurrSize;
    node* korijen;
    node* curr;

public:
    BinaryTree(int data){
        this->Maxsize = data;;
        this->CurrSize = 0;
        this->korijen = NULL;
        this->curr = NULL;
    }
    void dodajuDrvo(int value){
        if(this->CurrSize < this->Maxsize){
        node* novi = new node;
        novi->left =NULL;
        novi->right=NULL;
        novi->data = value;
        bool dodan = false;
        if(this->korijen == NULL){
            korijen = novi;
            curr = korijen;
            dodan = true;
            this->CurrSize ++;
        }
        else{
            while(true){
                if(novi->data >= curr->data && curr->left != NULL){
                    curr = curr->left;
                }
                else if(novi->data < curr->data && curr->right != NULL){
                     curr = curr->right;
                }

                if(novi->data >= curr->data && curr->left == NULL){
                     curr->left = novi;
                    cout <<novi->data<<" dodano Poslije "<<curr->data<<" na lijevu stranu!"<<endl;
                    dodan = true;
                    this->CurrSize ++;
                    curr = korijen;
                    break;
                }
                else if(novi->data < curr->data && curr->right == NULL){
                    curr->right = novi;
                    cout <<novi->data<<" dodano Poslije "<<curr->data<<" na desnu stranu!"<<endl;
                    dodan = true;
                    this->CurrSize ++;
                    curr = korijen;
                    break;
                }
            }
        }
    }
    else{
        cout <<"Drvo je nedovoljnog kapaciteta!"<<endl;
    }
    }

};
