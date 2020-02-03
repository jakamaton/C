int divisibleSumPairs(int n, int k, vector<int> ar) {

int temp = 0;

for(int i = 0; i < ar.size(); i++){

    for(int j = 0; j < i; j++){

        if(( (ar[i]+ar[j]) % k == 0 ) ){
        temp++;
        }
    }
}
