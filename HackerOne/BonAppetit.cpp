void bonAppetit(vector<int> bill, int k, int b) {

    int temp = 0;
    int sum = 0;

    for(int i = 0; i <bill.size(); i++){
        sum += bill[i];
        if(i != k){
            temp += bill[i];
        }
    }
            if((temp/2) == b ){
            cout << "Bon Appetit";
            }

            else{
            cout << (sum/2) - (temp/2);
                }

}
