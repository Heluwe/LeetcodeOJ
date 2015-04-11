struct node{
    int count;
    int num;
};
int majorityElement(int num[], int n) {
    int i,_i=0;
    struct node *head;
    if(!(n/2))return *num;
    head=(struct node*)malloc(sizeof(struct node)*(n/2)+1);
    for(i=0;i<=n/2;i++)
        head[i].count=0;
    for(i=0;i<n;i++)
        for(_i=0;_i<=i;_i++){
            if(!head[_i].count){ 
                head[_i].num = num[i];
                head[_i].count++;
                break;
           }
           else if(num[i]==head[_i].num){
               head[_i].count++;
               break;
           }
       }
    for(i=0;i<=n/2;i++)
    if(head[i].count>n/2)
    return head[i].num;
    }