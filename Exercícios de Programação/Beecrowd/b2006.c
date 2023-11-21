#include<stdio.h>

int main(){

    int correct_tea, pred1, pred2, pred3, pred4, pred5, correct_preds;
    scanf("%d %d %d %d %d %d",&correct_tea, &pred1, &pred2, &pred3, &pred4, &pred5);

    correct_preds = (pred1 == correct_tea) + (pred2 == correct_tea) + (pred3 == correct_tea) +
    (pred4 == correct_tea) + (pred5 == correct_tea);

    printf("%d\n",correct_preds);
    return 0;
} 