natural *N6(natural *A, int b) 
{
	natural *C;
	C = copy_natural(A);
    
	//checking for zero
	if(b)
	{
		size_t i = 0;
        int r = 0, c = 0;
        
		//the main loop of the multiplication
		while(i != (A -> length))
		{
            c = (C -> digits[i]) * b;
            if(r) c += r;
            C -> digits[i] = c % 10;
            r = c / 10;
			i++;    
        }
        	//case with a new category
        	if(r)
		{
            		resize_natural(C, (C -> length) + 1);
            		C -> digits[(C -> length) - 1] = r; 
        	}
        
	}
	else
	{
    		//zeroing
            resize_natural(C, 1);
    		C -> digits[0] = 0;
	}
	return C;
}
