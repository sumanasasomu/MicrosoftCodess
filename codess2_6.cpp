#include <bits/stdc++.h>
using namespace std;
int mid(int s,int e){
   return s + (e-s)/2;
}
struct node{
	int key;
	struct node *left, *right;
};
struct node* newNode(int item){
	struct node* temp = (struct node*) malloc(sizeof(struct node));
	temp -> key = item;
	temp->left = temp->right = NULL;
	return temp;
}
bool f(int a, int b){
	return a>b;
}

struct node* myfun(int* arr,int s,int e){
   if(s>e)
      return NULL;
   int m = mid(s,e);
   struct node* head = newNode(arr[m]);
   (head)->left = myfun(arr,s,m-1);
   (head)->right = myfun(arr,m+1,e);
   return head;
}
void printPreorder(struct node* node){
	if(node == NULL)
		return;
	cout<<node->key<<" ";
	printPreorder(node->left);
	printPreorder(node->right);
}
int main(){
   string s;
   cin >> s;
   bool flag = 1;
   int len = s.length();
   int arr[len];
   int i=0,cnt=0;
   while(i<len){
   		if(flag){
   			int temp = s[i]- '0';
   			arr[cnt++] = temp;
   			i++;
   		}
   		else if(!flag){
   			int temp = (s[i]-'0');
   			if(i+1 < len){
               temp*=10;
               temp+=(s[i+1]-'0');
               i++;
            }
   			arr[cnt++] = temp;
   			i++;
   		}
   		flag = !flag;
   }
   sort(arr,arr+cnt,f);

   int m = mid(0,cnt-1);
   struct node* root = myfun(arr,0,cnt-1);

   printPreorder(root);
   cout << endl;
   return 0;
}

