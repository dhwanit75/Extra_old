# Secy_Recruitment_Task_1_Criterions

So the following models have been trained on the given loss functions :
1.  Linear_Reg_I = Linear Regression using '|x -  x̂|³' loss function.
2.  Linear_Reg_II = Linear Regression using '|x -  x̂|' loss function.
3.  poly_reg_I = Polynomial Regression using '|x -  x̂|⁴' loss function.
4.  poly_reg_I = Polynomial Regression using '|x -  x̂|⁷' loss function.

So while training Linear regression the first model that is the cubic loss function doesn't train efficiently and amounts to quite a much loss as compared to the linear loss function. A similar thing is observed in Polynomial Regression where the first loss function works better rather than the seventh power loss function which is also not efficient. Here efficiency amounts to the no. of epochs and the learning rate which is very high and very low respectively for high power loss functions requiring more time to train and still not giving appropriate results.
