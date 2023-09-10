#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
#define DataType int

typedef struct ArrayQueue {
	int front;
	int rear;
	DataType queue[MAX_SIZE]
} ArrayQueue;

void init_queue(ArrayQueue *AQ){
	AQ->front = AQ -> rear =0;
}

void print_queue(ArrayQueue *AQ){
	printf("front->");
	for (int i = AQ->front ; i != AQ->rear ;  ){
		i = (i+1) % MAX_SIZE;
		printf("%d", AQ->queue[i]);
	}
	printf("\n");
}

int is_queue_full(ArrayQueue *AQ){
	return ((AQ->rear+1) % MAX_SIZE) == AQ->front;
}

int is_queue_empty(ArrayQueue *AQ){
	return AQ->front == AQ->rear;
}

void enqueue(ArrayQueue *AQ, DataType data){
	if(is_queue_full(AQ)){
		printf("포화 큐이므로 항목 삽입이 불가능합니다.\n");
		exit (1); 
	}
	else {
		AQ->rear = (AQ->rear +1) % MAX_SIZE;
		AQ->queue[AQ->rear] = data;
	}
}

DataType dequeue(ArrayQueue *AQ){
	if(is_queue_empty(AQ)){
		printf("공백 큐이므로 항목 삭제가 불가능합니다.\n");
		exit (1);
	}
	else {
		AQ->front = (AQ->front+1) % MAX_SIZE;
		return AQ->queue[AQ->front];
	}
}

DataType peek(ArrayQueue *AQ){
	if(is_queue_empty(AQ)){
		printf("공백이므로 데이터가 없습니다.\n");
		exit(1);
	}
	else return AQ->queue[AQ->front+1];
}

void weeding(QueueType *m ,QueueType *f) 
{
	 QueueType *tmp = m->front;					//남자 큐 앞 자리
	 QueueType *tmp1= f->front;					//여자 큐 앞 자리
	 if(is_empty(m,f))
	 {
		printf(" queue is empty!\n");
	 }
	 else
	 {
		  m->front = m->front->link;			//front  한칸 자리 이동
		  f->front = f->front->link;			//front  한칸 자리 이동
		  if(m->front == NULL)
			m->rear = NULL;
		  if(f->front == NULL)
			f->rear = NULL;
		  free(tmp); 
		  free(tmp1);
	 }
}

//서로 상대자가 있는지 검색하는 함수
void meeting(QueueType *m ,QueueType *f)
{
	 QueueType *tmp = m->front;							//남자 큐 앞 자리
	 QueueType *tmp1= f->front;							//여자 큐 앞 자리
	 if( m->front == NULL || f->front ==NULL)
	 {
		printf("아직 대상자가 없습니다. 기다려주십시오\n");
	 }else{
		printf("\n -- 커플이 탄생...했습니다. -- \n");
		printf("  => %s 과 %s \n",m->front->name , f->front->name);
		weeding(m,f);								//커플 완성
	 }
}

void main()
{
	QueueType q_m,q_f;
	char str[20][20];
	char sex=NULL;
	int i=0;
	
	init(&q_m);
	init(&q_f);
	
	do{

		printf("--고객이름 q 입력시 종료--\n");
		printf("미팅 주선 프로그램 입니다.\n\n");
		printf("고객이름:");
		
		scanf("%s",str[i]);
		fflush(stdin);
		if(strcmp(str[i],"q"))
		{
			printf("성별을 입력하세요(f or m) ");
			scanf("%c",&sex);
			fflush(stdin);
			switch(sex)
			{
			case 'm':
				enqueue(&q_m,str[i]);
				meeting(&q_m,&q_f);
				break;
			case 'f':
				enqueue(&q_f,str[i]);
				meeting(&q_m,&q_f);
				break;
			default :
				printf("잘못 입력하셨습니다.\n");
				break;
			}
			i++;
		}
		
	}while(strcmp(str[i],"q"));
	
}
