//双向链表解法
/*
#include<iostream>
using namespace std;
struct ListNode
{
    
    int number;
    ListNode *next;
    ListNode *pred;
};

int main(){
    int n,m;
    cin>>n>>m;
    ListNode*head=new ListNode{1,nullptr,nullptr};
    ListNode*current=head;
    for(int i=1;i<n;i++){
        ListNode *add=new ListNode{i+1,nullptr,current};
        current->next=add;
        current=current->next;
    }
    current->next=head;
    head->pred=current;
    int length=n;
    ListNode*deleteNode=head;
    while(length>0){
        for(int i=0;i<m-1;i++){
            deleteNode=deleteNode->next;
        }
        cout<<deleteNode->number<<" ";
        deleteNode->pred->next=deleteNode->next;
        deleteNode->next->pred=deleteNode->pred;
        deleteNode=deleteNode->next;
        length--;
    }
    return 0;

}
*/
//队列解法
//模拟题
#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    queue<int>student;
    for(int i=1;i<=n;i++){
        student.push(i);
    }
    int current=1;
    while(!student.empty()){
        if(current==m){
            cout<<student.front()<<" ";
            student.pop();
            current=1;
        }
        else{
            student.push(student.front());
            student.pop();
            current++;
        }
    }
    cout<<endl;
    return 0;
}
