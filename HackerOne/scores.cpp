vector<int> breakingRecords(vector<int> scores) {

    vector<int> tulos(2);
       int big = scores[0];
       int small = scores[0];

    for(int i = 0; i < scores.size(); i++){
        if(big < scores[i]){
            tulos[0]++;
            big = scores[i];

        }
        if(small > scores[i]){
            tulos[1]++;
            small = scores[i];
        }
    }

    return tulos;

}
