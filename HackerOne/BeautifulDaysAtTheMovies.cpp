int beautifulDays(int i, int j, int k) {
    
    //Muuttujat
    int r = 0, reverse = 0, c = 0;
    
    //Kaydaan lapi kaikki paivat, tein ensin vectorin jossa sailytin paivia mutta sita ei tarvita
    for (int y = i; y < j+1; y++) {
    //Otetaan paiva y kasittelyyn
    int n = y;
    //Kaanettaan se
    while(n != 0) {
        r = n % 10;
        reverse = reverse * 10 + r;
        n /= 10;
    }
    //Varmistus etta kaanto toimii
    cout << reverse << "\n";
    //Otetaan paivasta kaannetty arvo pois ja jaetaan arvolla k
    if(abs(y-reverse)%k == 0){
        //Jos jako menee tasan lisataan se palautukseen
       c++;
    }
        //Nollataan kaanetty arvo tama saattaa olla turha
        reverse = 0;
    }
return c;
}
