#ifndef PROCESS_H
#define PROCESS_H


#include <stdint.h>

#include <apex_process.h>

#include "statics.h"


void init_processes(void);
void create_process (
	partition_t* partition,
	uint32_t memoryAddress,
	/*in */ PROCESS_ATTRIBUTE_TYPE   *ATTRIBUTES,
	/*out*/ PROCESS_ID_TYPE          *PROCESS_ID,
	/*out*/ RETURN_CODE_TYPE         *RETURN_CODE );


#endif /* PROCESS_H */