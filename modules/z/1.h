//Есин Артём 9305
//Модуль целого числа
natural *Z1(integer *A)
{
    size_t i;
    natural *B;
    B = init_natural(A -> length);
    for(i = 0 ; i < B-> length ; i++)
        B -> digits[i] = A -> digits[i];//Копирование чисел целого числа
    return B;
}
