//Боголюбова Вера 9305
//Данный модуль проверяет натуральное число на 0
bool N2(natural *N) 
{
    if((N -> length) == 1 && N -> digits[0] == 0)//Длина равная единице обозначает что число определено, а что её первая цифра 0 указывает на то, что это число - 0
        return false;
    else return true;
}
