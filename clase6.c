    #include <stdio.h>
    #include <stdlib.h>
    #define CANT 5
    int main()
    {


    int pts[CANT]={1,0,3,3,1};
    int auxpts,i,j;
    int dg[CANT]={4,3,8,10,5};
    int auxdg;


        for(i=0;i<CANT-1;i++)
        {
            for(j=i+1;j<CANT;j++)
            {
                if(pts[i]<pts[j])
                {
                    auxpts=pts[i];
                    pts[i]=pts[j];
                    pts[j]=auxpts;

                    auxdg=dg[i];
                    dg[i]=dg[j];
                    dg[j]=auxdg;
                }
                else{
                    if (pts[i]==pts[j])
                    {
                        if (dg[i]<dg[j]){
                            auxpts=pts[i];
                            pts[i]=pts[j];
                            pts[j]=auxpts;

                            auxdg=dg[i];
                            dg[i]=dg[j];
                            dg[j]=auxdg;
                        }
                    }
                }
            }
        }
            for(i=0;i<CANT;i++)
        {
            printf("\npuntos:%d\ndg:%d",pts[i],dg[i]);
        }
        return 0;
    }
