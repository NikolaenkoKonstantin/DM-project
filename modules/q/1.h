fraction *Q1(fraction *A) {
    fraction *res = copy_fraction(A);
    natural *B = NULL;
    B = N13(A -> denominator, Z1(A -> numerator));
    res -> numerator = Z9(A -> numerator, Z4(B));
    res -> denominator = N11(A -> denominator, B);
    free(B);
    return res;
}
