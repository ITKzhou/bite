//#define _CRT_SECURE_NO_WARNINGS 1



///@Problem : ��ջʵ�ֶ���
///                                                                           
///  https://leetcode.cn/problems/implement-queue-using-stacks/description/                                                                          
///��������������������������������������������������������������������������������������������������������������������������������������������������������            
///@Codeing :
///                                                                           
///һ��ջ�����ջpushst����һ��ջ������ջpopst
///����ջ��Ϊ��ʱ��ֱ�ӽ��г�ջ����
///����ջ��Ϊ�գ�������ջȫ��Ԫ�ص��뵽����ջ���ٽ��г�ջ����                                                                                                                                                      
///****************************************************************************          

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//#include <string.h>
//
//typedef int STDataType;
//
//typedef struct Stack {
//    STDataType* _a;
//    int _top;      // ջ��
//    int _capacity; // ����
//} Stack;
//
//void StackInit(Stack* ps);
//void StackDestroy(Stack* ps);
//bool StackEmpty(Stack* ps);
//int StackSize(Stack* ps);
//void StackPush(Stack* ps, STDataType x);
//void StackPop(Stack* ps);
//STDataType StackTop(Stack* ps);
//
//void StackInit(Stack* ps) {
//    assert(ps);
//    ps->_a = NULL;
//    ps->_capacity = 0;
//    ps->_top = 0; // ��ʾtopָ��ջ��Ԫ�ص���һ��λ��
//    // pst->top = -1;// ��ʾtopָ��ջ��Ԫ��
//}
//
//int StackSize(Stack* ps) {
//    assert(ps);
//    return ps->_top; // ʵ�����±꣬����ָ��
//}
//
//bool StackEmpty(Stack* ps) {
//    assert(ps);
//    return ps->_top == 0; // Ϊ�գ������棬��1����Ϊ�գ����ؼ٣���0
//}
//
//void StackPush(Stack* ps, STDataType x) {
//    assert(ps);
//    if (ps->_top == ps->_capacity) {
//        STDataType newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
//        STDataType* tmp =
//            (STDataType*)realloc(ps->_a, newcapacity * sizeof(STDataType));
//        if (tmp == NULL) {
//            perror("realloc fail");
//            return;
//        }
//        ps->_a = tmp;
//        ps->_capacity = newcapacity;
//    }
//    ps->_a[ps->_top] = x;
//    ps->_top++;
//}
//
//void StackPop(Stack* ps) {
//    assert(ps);
//    assert(!StackEmpty(ps));
//
//    ps->_top--;
//}
//
//STDataType StackTop(Stack* ps) {
//    assert(ps);
//    assert(!StackEmpty(ps));
//
//    return ps->_a[ps->_top - 1];
//}
//
//void StackDestroy(Stack* ps) {
//    assert(ps);
//    free(ps->_a);
//    ps->_a = NULL;
//    ps->_top = ps->_capacity = 0;
//}
//
//// �涨һ������ջ����һ���ǳ�ջ������ջΪ�վ͵������ٳ�ջ������ֱ�ӳ�ջ
//
//typedef struct {
//    Stack pushst;
//    Stack popst;
//} MyQueue;
//
//MyQueue* myQueueCreate() {
//    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
//    StackInit(&obj->pushst);
//    StackInit(&obj->popst);
//    return obj;
//}
//
//void myQueuePush(MyQueue* obj, int x) { StackPush(&obj->pushst, x); }
//
//int myQueuePop(MyQueue* obj) {
//    int top = myQueuePeek(obj);
//    StackPop(&obj->popst);
//    return top;
//}
//
//int myQueuePeek(MyQueue* obj) {
//    if (StackEmpty(&obj->popst)) { // ������
//        while (!StackEmpty(&obj->pushst)) {
//            StackPush(&obj->popst, StackTop(&obj->pushst));
//            StackPop(&obj->pushst);
//        }
//    }
//    return StackTop(&obj->popst);
//}
//
//bool myQueueEmpty(MyQueue* obj) {
//    return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
//}
//
//void myQueueFree(MyQueue* obj) {
//    StackDestroy(&obj->pushst);
//    StackDestroy(&obj->popst);
//    free(obj);
//}
//
//int main()
//{
//    MyQueue* obj = myQueueCreate();
//    myQueuePush(obj, 1);
//    myQueuePush(obj, 2);
//
//    int peek_top = myQueuePeek(obj);
//
//
//
//    return 0;
//}

///  ʱ�临�Ӷȣ� O()                                                            
///  �ռ临�Ӷȣ� O()                                                                        

///��������������������������������������������������������������������������������������������������������������������������������������������������������  
