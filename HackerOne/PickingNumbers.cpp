int pickingNumbers(vector<int> a) {
    vector<int> v; 
    int s = 0;

    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a.size(); j++){
            if(a[i] == a[j] || a[i]+1 == a[j]){
                cout << a[j] << " ";
                v.push_back(a[j]);
            }
        }

        cout <<  "\n";
        if(v.size() > s){
            s = v.size();
        }
        v.clear();
    }
    return s;
}