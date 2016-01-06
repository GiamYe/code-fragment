//ѭ�����У�
//�ж϶���Ϊ���ķ�������һ��Ԫ�أ�rear+1=front,rearָ����������һ��Ԫ�ص���һ��λ��
//���Դ˶���ֻ�ܴ�MAX-1��Ԫ�ء�
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 3

typedef struct 
{
	int array[MAX];
	int front;
	int rear;
} queue;

void init(queue *q){
	q->front = q->rear = 0;
}
bool isEmpty(queue *q){
	if(q->front==q->rear)
		return true;
	return false;
}

bool isFull(queue *q){
	if((q->rear+1)%MAX == q->front)
		return true;
	return false;
}

void enqueue(queue *q, int n){
	if(isFull(q))
		printf("queue is full!");
	else{
		q->array[q->rear]=n;
		q->rear = (q->rear+1)%MAX;
	}
}

int dequeue(queue *q){
	if(isEmpty(q))
		return 0;
	else{
		return q->array[q->front++];	
	}
}

main(){
	queue *q = malloc(sizeof (queue));
	init(q);
	enqueue(q,4);
	enqueue(q,5);
	//dequeue(q);
	//enqueue(q,6);
	enqueue(q,9);
	//printf("%d",dequeue(q));
	printf("%d",q->front);
	printf("%d",q->rear);
	//printf("%d",isEmpty(q));
}
