#include <stdlib.h>
#include <sys/ioctl.h>
#define w winsize
                                               int II
                                              =100;;;
                                                double
                                     Sx   =-2.5,Ex=1.5,Sy=
                                      -1.5,Ey=1.5;double Cx,Cy;int
                                   mand=1;char c[]={'_','-','.',
                                 ',',':','/','|','{','%','&','#',
                                'M'};main(int argc,char**argv){if(
                 argc==5||     argc == 7){Sx=atof(argv[1]);Ex=atof(
               argv[2]);Sy=atof(argv[3]);Ey=atof(argv[4]);}if(argc
              ==7||argc==3) {Cx=atof(argv[argc==7?5:1]); Cy=atof(
     argv[argc==7?6:2]);mand=0;}struct w ws;ioctl(0,TIOCGWINSZ
              ,&ws);int x=ws.ws_col,y=ws.ws_row,i,j,I;double oa,a,
               b,dx=(Ex-Sx)/x,dy=(Ey-Sy)/y,X=Sx,Y=Ey; for(i=0;i<y;
                 i++,Y-=dy     ,X=Sx)for(j=0;j<x;j++,X+=dx){if(mand
                                ){Cx=X;Cy=Y;}for(I=0,a=X, b=Y;I<II 
                                 &&a*a+b*b<256.0; oa=a,a=a*a-b*b+
                                   Cx,b=2.0*oa*b+Cy,I++); if(I==
                                      II)printf(" ");else printf(
                                     "%c" ,c[I%12]);}int p
                                                =823;
                                              ;return
                                                0;;}
