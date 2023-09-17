#include <stdio.h>
#include <math.h>
int main() {
    /*int xc, yc, m, xp, yp;
    while(scanf("%d %d %d", &xc, &yc, &m) != EOF){
        for(int i=0; i<m; i++){
            scanf("%d %d", &xp, &yp);
            if(((xp>=0 && xp<=xc) && (yp>=0 && yp<=yc)) ||
             ((xp>=0 && xp<=yc) && (yp>=0 && yp<=xc))){
                printf("Sim\n");
            }else{
                printf("Nao\n");
            }
        }
    }*/

    int h, m;
    
    while((scanf("%d %d", &h, &m)!=EOF)){
        double arr[50], sum=0, sqr=0;
        int n = (h*60)/m;
        for(int i=0; i<n; i++){
            scanf("%lf", &arr[i]);
            sum += arr[i];
        }
        double avg = sum/n;
        for(int i=0; i<n; i++){
            sqr += pow((arr[i]-avg),2);
        }
        double res = sqr/(n-1);
        printf("%.5lf\n", sqrt(res));
    }
    return 0;
}