double power(long num, long deg) {
    double result = 1;

    if(deg < 0) {
        deg = -deg;
        for(long i = 0; i < deg; i++) {
            result *= num;
        }

        return 1 / result;
    }
    else {
        for (long i = 0; i < deg; i++) {
            result *= num;
        }

        return result;
    }
}
