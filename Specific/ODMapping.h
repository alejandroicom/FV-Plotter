#ifndef _OD_MAPPING_H_
#define _OD_MAPPING_H_


#define Q6_FACTOR 64.0
#define Q10_FACTOR 1024.0

/*NMT*/
#define NMT_MSG_ID 0x00
#define BROADCAST_NODE_ID 0x00
typedef enum
{
    GO_TO_OPERATIONAL 			= 0x01, 										
    GO_TO_STOPPED 				= 0x01,	 			
    GO_TO_PRE_OPERATIONAL 		= 0x80, 	 	
    GO_TO_RESET_NODE 			= 0x81,	 		
    GO_TO_RESET_COMM			= 0x82,  			

}NMTMsg;


#define HB_PRE_OPERATIONAL  0x7F
#define HB_OPERATIONAL 		0x05
#define HB_BOOTUP			0x00


typedef enum
{
    CMD_EXECUTED_OK, 			/* 0 = Comando ejecutado exitosamente 								*/
    CMD_IGNORED,	 			/* 1 = Comando ignorado por estar en un estado incompatible 		*/
    SYSTEM_BUSY, 	 			/* 2 = Comando ignorado por estar el sistema ocupado 				*/
    SYSTEM_ERROR,	 			/* 3 = Comando no ejecutado exitosamente, ocurrió un error 			*/
    SYSTEM_TIMEOUT,  			/* 4 = Comando no ejecutado exitosamente, timeout de comunicaciones */
    CMD_OUT_OF_RANGE, 			/* 5 = Comando desconocido (fuera de rango) 						*/
    CMD_CANCELLED,				/* 6 = Comando calcelado por el master								*/
    CMD_STARTED,				/* 7 = Proceso iniciado (por ejemplo calibración)					*/
    NUM_OF_CMD_STATUS
}CmdStatus;





#endif
