double my_pow(double num, unsigned deg) {
    long result = 1;

    for(long i = 0; i < deg; i++) {
        result *= num;
    }

    return result;
}
