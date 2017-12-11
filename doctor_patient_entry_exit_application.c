#include<stdio.h>

int main()
{
    int l_docIn=0, l_patIn=0,l_docOut=0,l_select;
    while (1)
    {
        printf("Select from the options:\n1.Doctor Entry\n2.Patient Entry\n3.Patient Exit\n4.Doctor Exit\n5.Exit\n");
        scanf("%d",&l_select);
        switch (l_select)
        {
            case 1:
            {
                if(l_docIn==1)
                {
                    printf("Doctor is still inside!!\n");
                }
                else
                {
                    printf("Doctor is in..!!\n");
                    l_docIn=1;
                    l_docOut=0;
                }
                break;
            }
            case 2:
            {
                if(l_docIn==1 && l_patIn==0)
                {
                    printf("Patient go inside.\n");
                    l_patIn=1;
                }
                else if (l_patIn==1 && l_docIn==1)
                {
                    printf("Doctor is Busy. Please Wait.\n");
                }
                else if (l_docOut==0)
                {
                    printf("Doctor is Not Yet In. Please Wait.\n");
                }
                else
                {
                    printf("Doctor has Left. Please Come Tomorrow.\n");
                }
                break;
            }
            case 3:
            {
                if(l_docIn==1 && l_patIn==0)
                {
                    printf("Are you Joking?, first send the patient.\n");
                }
                else if(l_docIn==0)
                {
                    printf("Doctor is Not Yet In. Please Wait.\n");
                }
                else
                {
                    printf("Patient has Exited!!\n");
                    l_patIn=0;
                }
                break;
            }
            case 4:
            {
                if(l_patIn==0 && l_docIn==1)
                {
                    printf("Doctor has left the clinic.\n");
                    l_docIn=0;
                    l_docOut=1;
                }
                else if(l_patIn==1 && l_docIn==1)
                {
                    printf("The Patient is in yet!!\n");
                }
                else
                {
                    printf("There is no doctor\n");
                }
                break;
            }
        case 5:
            {
                if(l_patIn==0 && l_docIn==0)
                {
                    printf("Exiting\n");
                    exit(0);
                }
                else if(l_docIn==1)
                {
                    printf("Doctor is still inside.\n");
                    break;
                }
                else
                {
                    printf("Patient is still inside.\n");
                    break;
                }
            }
            default:
            {
                printf("Invalid Option!!\n");
                break;
            }
        }
    }

    return 0;
}
