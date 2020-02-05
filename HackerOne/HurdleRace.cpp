int hurdleRace(int k, vector<int> height) {

    int tmp = 0;

    for(int i = 0; i < height.size(); i++){
        if(height[i] > tmp){
           tmp = height[i];
        }
    }
    if(k<tmp){
        return abs(tmp-k);
    }
    return 0;
}
