class D : public A, public B, public C //Require to add parent classes here for code to work
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		void update_val(int new_val)
		{
			int targetValue;
             		targetValue = new_val;
             
            		bool checkDivisibleTwo = true;
             		while (checkDivisibleTwo == true)
             		{
                 		if (targetValue % 2 == 0)
                 		{
                     			A::func(val);
					targetValue = targetValue / 2;
				}
				else
				{
					checkDivisibleTwo = false;
				}

			}

			bool checkDivisibleThree = true;
			while (checkDivisibleThree == true)
			{
				if (targetValue % 3 == 0)
				{
					B::func(val);
					targetValue = targetValue / 3;
				}
				else
				{
					checkDivisibleThree = false;
				}

			}

           		bool checkDivisibleFive = true;
		   	while (checkDivisibleFive == true)
		     	{
				if (targetValue % 5 == 0)
				{
					C::func(val);
					targetValue = targetValue / 5;
			 	}
			else
			{
				checkDivisibleFive = false;
			}

			}
		}
		//For Checking Purpose
		void check(int); //Do not delete this line.
};
