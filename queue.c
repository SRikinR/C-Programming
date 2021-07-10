#include<stdio.h>
#include<stdlib.h>

struct queue {
	int size;
	int f;
	int r;
	int *arr;
};

int isfull(struct queue *q){
	while(q->r == q->size-1){
		return 1;
	}
	return 0;
}

int isempty(struct queue *q){
	while(q->f == q->r){
		return 1;
	}
	return 0;
}

int enqueue(struct queue *q, int value){
	if(isfull(q)){
		printf("Queue Full");
	}
	else{
		q->r++;
		q->arr[q->r]=value;
	}
}

int dequeue(struct queue *q){
	int a=-1;
	int value;
	if(isempty(q)){
		printf("queue empty");
	}
	else{
		q->f++;
		value=q->arr[q->f];
	}
	return value;
}

int  main(){
	struct queue q;
	q.size=8;
	q.f=-1;
	q.r=-1;
	q.arr=(int *)malloc(q.size * sizeof(int));
	
	enqueue(&q,23);
	enqueue(&q,11);
	enqueue(&q,30);
	enqueue(&q,12);
	
	printf("Dequeued: %d\n",dequeue(&q));
	printf("Dequeued: %d\n",dequeue(&q));
	printf("Dequeued: %d\n",dequeue(&q));
	printf("Dequeued: %d\n",dequeue(&q));
	
	printf("\nQueue Status\n");
	printf("Queue Full: %d\n",isfull(&q));
	printf("Queue Empty: %d\n",isempty(&q));
	printf("\n");
	
	return 0;
}

