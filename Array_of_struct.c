#include<stdio.h>

typedef struct
{
	int	cmd_len;
	int	cur_tx_ptr;
	int	cmd_buf[10];
} st_gsm_tx_desc;



int main()
{
	st_gsm_tx_desc *ptx_desc;
	//static st_gsm_tx_desc gsm_tx_desc[10];
	st_gsm_tx_desc var_desc;
	//ptx_desc = &gsm_tx_desc[10];
	ptx_desc = &var_desc;
	ptx_desc->cmd_buf[0] = 10;
	printf("gsm_tx_desc[0] = %d",ptx_desc->cmd_buf[0]);
	
	return 0;
}
