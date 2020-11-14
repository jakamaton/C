int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {

     //Pienimmän hinnan muuttuja
     int min = 0;
     //Hinnan muutosten laskuri
     int c = 0;
     
     //Käydään läpi yhdistelmiä
     for(int i = 0; i < keyboards.size(); i++){
         for(int j = 0; j < drives.size(); j++){
             int temp = keyboards[i] + drives[j];
             //Jos yhdistelmän hinta on budjettiin sopiva ja suurempi kuin muut budjettiin 
             //sopivat hinnat valitaan se
             if(temp <= b && temp > min){
                 min = temp;
                 //Lasketaan kuinka monta kertaa hintaa on muutettu
                 c++;
             }
         }
     }
     //Jos hintaa ei ole muutettu kertaakaan palautetaan -1
     if(c != 0){
         return min;
     }
     else {
     return -1;
     }

}
