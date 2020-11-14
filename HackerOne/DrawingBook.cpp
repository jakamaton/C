int pageCount(int n, int p) {
    
    //Laskurit
    int begCount = 0, revCount = 0;
    
    if (n == p) {
        return 0;
    }
    
    //Jos p on puolessa välissä tai alle
    else if (p <= floor(n / 2)) {
        //Aloitetaan kirjan alusta
         for (int i = 1; i < n; i += 2) {
            //Niin kauan kunnes p on isompi kuin aukeaman sivut jossa ollaan lasketaan sivuja
            if (p > i) {
                begCount += 1;
            }
        }
        return begCount;
    //Jos p on yli puolessa välissä aloitetaan kirjan lopusta
    } else if (p > floor(n / 2)) {
        //Jos kirjan pituus ei ole parillinen tehdään siitä parillinen
        if (n % 2 != 0) {
            n -= 1;
        }
        //Selataan aukeamia kunnes ollaan sillä aukemalla jossa p on
        for (int j = n; j >= 0; j -= 2) {
            if (p < j) {
                revCount += 1;
            }
        }
        return revCount;
    }
  
    return 0;

 }
