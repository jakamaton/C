//Jostain syysta tama ei kelpaa
int jumpingOnClouds(vector<int> c) {
    //0 0 1 0 0 1 0
int jumps = 0;
for(int i = 0; i < c.size()+1; i++){
    if(c[i+2] == 0){
        jumps++;
        i +=2;
    }
    else{
        jumps++;
    }
}
return jumps;
}

int jumpingOnClouds(vector<int> c) {
    int jumps = 0;
    
    for (int i = 0; i < c.size(); i++) {
        if (i+2 < c.size() && !c[i+2]) {
            jumps++;
            i++;
        } else if (i+1 < c.size() && !c[i+1]) {
            jumps++;
        }
    }
    return jumps;
}
