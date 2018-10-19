#ifndef MYGRADE3_H_INCLUDED
#define MYGRADE3_H_INCLUDED

//prototypes
void showlettergrade(float);

void showlettergrade(float myGrade)
{
    if (myGrade>=94.0F)
    {
        printf("A");
    }
    else if (myGrade>=90.0F && myGrade<=93.9F)
    {
        printf("-A");
    }
    if (myGrade>=86.9F && myGrade <= 83.0F)
    {
        printf("B");
    }
    else if (myGrade>=82.9F && myGrade<=80.0F)
    {
        printf("-B");
    }
    if (myGrade>=76.9F && myGrade <= 73.0F)
    {
        printf("C");
    }
    else if (myGrade>=72.9F && myGrade<=70.0F)
    {
        printf("-C");
    }
    if (myGrade>=63.0F && myGrade<=66.9F)
    {
        printf("D");
    }
    else if (myGrade>=62.9F && myGrade<=60.0F)
    {
        printf("-D");
    }
    if (myGrade<=59.9F)
    {
        printf("F");
    }

}
#endif // MYGRADE3_H_INCLUDED

