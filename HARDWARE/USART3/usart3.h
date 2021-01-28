#ifndef __USART3_H
#define __USART3_H	 
#include "sys.h"  

#define USART3_MAX_RECV_LEN		1024				//�����ջ����ֽ���
#define USART3_MAX_SEND_LEN		1024				//����ͻ����ֽ���
#define USART3_RX_EN 			1					//0,������;1,����.

extern u8  USART3_RX_BUF[USART3_MAX_RECV_LEN]; 		//���ջ���,���USART2_MAX_RECV_LEN�ֽ�
extern u8  USART3_TX_BUF[USART3_MAX_SEND_LEN]; 		//���ͻ���,���USART2_MAX_SEND_LEN�ֽ�
extern u16 USART3_RX_STA;   						//��������״̬

void USART3_Init(u32 bound);				//����2��ʼ�� 
void TIM2_Set(u8 sta);
void TIM2_Init(u16 arr, u16 psc);
void UART3_DMA_Config(DMA_Channel_TypeDef*DMA_CHx, u32 cpar, u32 cmar);
void UART3_DMA_Enable(DMA_Channel_TypeDef*DMA_CHx, u8 len);
void u3_printf(char* fmt, ...);
#endif












