#ifndef COSMOPOLITAN_TOOL_BUILD_LIB_MDA_H_
#define COSMOPOLITAN_TOOL_BUILD_LIB_MDA_H_
#include "tool/build/lib/panel.h"
#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

void DrawMda(struct Panel *, uint8_t[25][80][2]);

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_TOOL_BUILD_LIB_MDA_H_ */
