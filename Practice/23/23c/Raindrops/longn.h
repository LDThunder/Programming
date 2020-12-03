long fact(long factn) {
    if (factn < 1)
        return 1;
    else return fact(factn -= 1) * n;
}