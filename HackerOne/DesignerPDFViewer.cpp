// Complete the designerPdfViewer function below.
int designerPdfViewer(vector<int> h, string word) {
string letters = "abcdefghijklmnopqrstuvwxyz";
vector<char> ch;

//Kaannetaan kirjaimet numeroiksi
vector<int> nums;
for(int j = 0; j < word.size(); j++) {
    for(int k = 0; k < letters.size(); k++) {
        if(word[j] == letters[k]){
           nums.push_back(h[k]);
            cout << letters[k] << ":" << h[k] << "\n";
        }
}
//Kun kaikki kirjaimet on kaanetty lopetetaan
if(nums.size() == word.size()){
    break;
}


}
//Etsitaan isoin numero
int biggest = 0;
for(int x = 0; x < nums.size(); x++){
    if(nums[x] > biggest){
        biggest = nums[x];
        //cout << biggest << "\n";
    }
}

//Isoin kertaa pituus palauttaa alan
return biggest * nums.size();
}
