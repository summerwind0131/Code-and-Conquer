#include<iostream>
#include<vector>
using namespace std;

using ll=long long;

vector<ll>a;
vector<ll>temp;

ll mergeSort(int left,int right){
    if(left>=right){
        return 0;
    }

    int mid=left+(right-left)/2;
    
    ll ans=0;
    ans+=mergeSort(left,mid);
    ans+=mergeSort(mid,right);

    int i=left;
    int j=mid+1;
    int k=left;

    while (i<=mid &&j<=left)
    {
        /* code */
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }else{
            temp[k++]=a[j++];
            ans+=mid-i+1;
        }
    }

    while (i<=mid)
    {
        /* code */
        temp[k++]=a[i++];
    }
    while (j<=right)
    {
        /* code */
        temp[k++]=a[j++];
    }
    
    for (int p = left; p <= right; p++) {
        a[p] = temp[p];
    }

    return ans;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    a.resize(n);
    temp.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << mergeSort(0, n - 1) << '\n';

    return 0;
}

