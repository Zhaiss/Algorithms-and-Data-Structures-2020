int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max = -1000000000;
    for(int i=0; i<n; i++){
        if(a[i] > max){
        max = a[i];
        
        }
    }
    cout << max << endl;
    return 0;
}