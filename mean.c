#include<stdio.h>
#include<math.h>
//Mean : it is the average of a number of elements in a set of values.
//which means just add the values in a set and divide the sum with the number of elements in the set
//Variance : It is the average of squared difference of mean and the values of the data set it is  called the spread of data 
//within a sample of data.
//Standard deviation:after we got the variance we get the standard deviation by taking square root of the variance

//In this c program we are taking the values for a set from the users, the mean is calculated by taking average of the sum by using a for loop 
//after that we need to calculate variance using the formula “value=a[i]-mean; sumsqr=sumsqr + value*value;” and var = sumsqr/ n;
 //then now we need to calculate the standard deviation of the set, we use SD = sqrt(var) formula in this c program.

//.
int main()
{
   int i,n;
   float std_dev,sum=0,sumsqr=0,mean,value,variance=0.0,a[100];
   printf("Enter value of n : ");
   scanf("%d",&n);
   printf("\nEnter numbers : ");
   for(i=0;i<n;i++)
   {
      printf("\nNumber %d : ",i+1);
      scanf("%f",&a[i]);
      sum=sum+a[i];
   }
   mean=sum/n;
   sumsqr=0;
   for(i=0;i<n;i++)
   {
     value=a[i]-mean;
     sumsqr=sumsqr+value*value;
    }
     variance=sumsqr/n;
     std_dev=sqrt(variance);
     printf("\nMean of %d numbers = %f\n",n,mean);
     printf("\nVariance of %d numbers = %f\n",n,variance);
     printf("\nStandard deviation of %d numbers = %f\n",n,std_dev);
     return 0;
} 
