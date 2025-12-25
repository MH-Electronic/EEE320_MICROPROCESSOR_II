/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2' in SOPC Builder design 'MicroP'
 * SOPC Builder design path: ../../MicroP.sopcinfo
 *
 * Generated: Sun Jan 19 20:11:29 SGT 2025
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * Buzzer configuration
 *
 */

#define ALT_MODULE_CLASS_Buzzer altera_avalon_pio
#define BUZZER_BASE 0x15040
#define BUZZER_BIT_CLEARING_EDGE_REGISTER 0
#define BUZZER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUZZER_CAPTURE 0
#define BUZZER_DATA_WIDTH 1
#define BUZZER_DO_TEST_BENCH_WIRING 0
#define BUZZER_DRIVEN_SIM_VALUE 0
#define BUZZER_EDGE_TYPE "NONE"
#define BUZZER_FREQ 50000000
#define BUZZER_HAS_IN 0
#define BUZZER_HAS_OUT 1
#define BUZZER_HAS_TRI 0
#define BUZZER_IRQ -1
#define BUZZER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUZZER_IRQ_TYPE "NONE"
#define BUZZER_NAME "/dev/Buzzer"
#define BUZZER_RESET_VALUE 0
#define BUZZER_SPAN 16
#define BUZZER_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00014820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x11
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x11
#define ALT_CPU_NAME "nios2"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00014820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x11
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x11
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Clk_check configuration
 *
 */

#define ALT_MODULE_CLASS_Clk_check altera_avalon_pio
#define CLK_CHECK_BASE 0x15080
#define CLK_CHECK_BIT_CLEARING_EDGE_REGISTER 0
#define CLK_CHECK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CLK_CHECK_CAPTURE 0
#define CLK_CHECK_DATA_WIDTH 1
#define CLK_CHECK_DO_TEST_BENCH_WIRING 0
#define CLK_CHECK_DRIVEN_SIM_VALUE 0
#define CLK_CHECK_EDGE_TYPE "NONE"
#define CLK_CHECK_FREQ 50000000
#define CLK_CHECK_HAS_IN 0
#define CLK_CHECK_HAS_OUT 1
#define CLK_CHECK_HAS_TRI 0
#define CLK_CHECK_IRQ -1
#define CLK_CHECK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define CLK_CHECK_IRQ_TYPE "NONE"
#define CLK_CHECK_NAME "/dev/Clk_check"
#define CLK_CHECK_RESET_VALUE 0
#define CLK_CHECK_SPAN 16
#define CLK_CHECK_TYPE "altera_avalon_pio"


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SPI
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_VIDEO_CHARACTER_BUFFER_WITH_DMA


/*
 * RFID_cs configuration
 *
 */

#define ALT_MODULE_CLASS_RFID_cs altera_avalon_pio
#define RFID_CS_BASE 0x10020
#define RFID_CS_BIT_CLEARING_EDGE_REGISTER 0
#define RFID_CS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RFID_CS_CAPTURE 0
#define RFID_CS_DATA_WIDTH 1
#define RFID_CS_DO_TEST_BENCH_WIRING 0
#define RFID_CS_DRIVEN_SIM_VALUE 0
#define RFID_CS_EDGE_TYPE "NONE"
#define RFID_CS_FREQ 50000000
#define RFID_CS_HAS_IN 0
#define RFID_CS_HAS_OUT 1
#define RFID_CS_HAS_TRI 0
#define RFID_CS_IRQ -1
#define RFID_CS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RFID_CS_IRQ_TYPE "NONE"
#define RFID_CS_NAME "/dev/RFID_cs"
#define RFID_CS_RESET_VALUE 0
#define RFID_CS_SPAN 16
#define RFID_CS_TYPE "altera_avalon_pio"


/*
 * RFID_spi configuration
 *
 */

#define ALT_MODULE_CLASS_RFID_spi altera_avalon_spi
#define RFID_SPI_BASE 0x10000
#define RFID_SPI_CLOCKMULT 1
#define RFID_SPI_CLOCKPHASE 0
#define RFID_SPI_CLOCKPOLARITY 0
#define RFID_SPI_CLOCKUNITS "Hz"
#define RFID_SPI_DATABITS 8
#define RFID_SPI_DATAWIDTH 16
#define RFID_SPI_DELAYMULT "1.0E-9"
#define RFID_SPI_DELAYUNITS "ns"
#define RFID_SPI_EXTRADELAY 0
#define RFID_SPI_INSERT_SYNC 0
#define RFID_SPI_IRQ 3
#define RFID_SPI_IRQ_INTERRUPT_CONTROLLER_ID 0
#define RFID_SPI_ISMASTER 1
#define RFID_SPI_LSBFIRST 0
#define RFID_SPI_NAME "/dev/RFID_spi"
#define RFID_SPI_NUMSLAVES 1
#define RFID_SPI_PREFIX "spi_"
#define RFID_SPI_SPAN 32
#define RFID_SPI_SYNC_REG_DEPTH 2
#define RFID_SPI_TARGETCLOCK 4000000u
#define RFID_SPI_TARGETSSDELAY "0.0"
#define RFID_SPI_TYPE "altera_avalon_spi"


/*
 * Switches configuration
 *
 */

#define ALT_MODULE_CLASS_Switches altera_avalon_pio
#define SWITCHES_BASE 0x15070
#define SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_CAPTURE 0
#define SWITCHES_DATA_WIDTH 8
#define SWITCHES_DO_TEST_BENCH_WIRING 0
#define SWITCHES_DRIVEN_SIM_VALUE 0
#define SWITCHES_EDGE_TYPE "NONE"
#define SWITCHES_FREQ 50000000
#define SWITCHES_HAS_IN 1
#define SWITCHES_HAS_OUT 0
#define SWITCHES_HAS_TRI 0
#define SWITCHES_IRQ -1
#define SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCHES_IRQ_TYPE "NONE"
#define SWITCHES_NAME "/dev/Switches"
#define SWITCHES_RESET_VALUE 0
#define SWITCHES_SPAN 16
#define SWITCHES_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag"
#define ALT_STDERR_BASE 0x150a0
#define ALT_STDERR_DEV jtag
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag"
#define ALT_STDIN_BASE 0x150a0
#define ALT_STDIN_DEV jtag
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag"
#define ALT_STDOUT_BASE 0x150a0
#define ALT_STDOUT_DEV jtag
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "MicroP"


/*
 * bluetooth_UART configuration
 *
 */

#define ALT_MODULE_CLASS_bluetooth_UART altera_avalon_uart
#define BLUETOOTH_UART_BASE 0x15000
#define BLUETOOTH_UART_BAUD 9600
#define BLUETOOTH_UART_DATA_BITS 8
#define BLUETOOTH_UART_FIXED_BAUD 1
#define BLUETOOTH_UART_FREQ 50000000
#define BLUETOOTH_UART_IRQ 1
#define BLUETOOTH_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BLUETOOTH_UART_NAME "/dev/bluetooth_UART"
#define BLUETOOTH_UART_PARITY 'N'
#define BLUETOOTH_UART_SIM_CHAR_STREAM ""
#define BLUETOOTH_UART_SIM_TRUE_BAUD 0
#define BLUETOOTH_UART_SPAN 32
#define BLUETOOTH_UART_STOP_BITS 1
#define BLUETOOTH_UART_SYNC_REG_DEPTH 2
#define BLUETOOTH_UART_TYPE "altera_avalon_uart"
#define BLUETOOTH_UART_USE_CTS_RTS 0
#define BLUETOOTH_UART_USE_EOP_REGISTER 0


/*
 * button_int configuration
 *
 */

#define ALT_MODULE_CLASS_button_int altera_avalon_pio
#define BUTTON_INT_BASE 0x15050
#define BUTTON_INT_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_INT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_INT_CAPTURE 1
#define BUTTON_INT_DATA_WIDTH 1
#define BUTTON_INT_DO_TEST_BENCH_WIRING 0
#define BUTTON_INT_DRIVEN_SIM_VALUE 0
#define BUTTON_INT_EDGE_TYPE "FALLING"
#define BUTTON_INT_FREQ 50000000
#define BUTTON_INT_HAS_IN 1
#define BUTTON_INT_HAS_OUT 0
#define BUTTON_INT_HAS_TRI 0
#define BUTTON_INT_IRQ 2
#define BUTTON_INT_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON_INT_IRQ_TYPE "EDGE"
#define BUTTON_INT_NAME "/dev/button_int"
#define BUTTON_INT_RESET_VALUE 0
#define BUTTON_INT_SPAN 16
#define BUTTON_INT_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag configuration
 *
 */

#define ALT_MODULE_CLASS_jtag altera_avalon_jtag_uart
#define JTAG_BASE 0x150a0
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/jtag"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * keypad_column configuration
 *
 */

#define ALT_MODULE_CLASS_keypad_column altera_avalon_pio
#define KEYPAD_COLUMN_BASE 0x15060
#define KEYPAD_COLUMN_BIT_CLEARING_EDGE_REGISTER 0
#define KEYPAD_COLUMN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEYPAD_COLUMN_CAPTURE 0
#define KEYPAD_COLUMN_DATA_WIDTH 4
#define KEYPAD_COLUMN_DO_TEST_BENCH_WIRING 0
#define KEYPAD_COLUMN_DRIVEN_SIM_VALUE 0
#define KEYPAD_COLUMN_EDGE_TYPE "NONE"
#define KEYPAD_COLUMN_FREQ 50000000
#define KEYPAD_COLUMN_HAS_IN 1
#define KEYPAD_COLUMN_HAS_OUT 0
#define KEYPAD_COLUMN_HAS_TRI 0
#define KEYPAD_COLUMN_IRQ -1
#define KEYPAD_COLUMN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEYPAD_COLUMN_IRQ_TYPE "NONE"
#define KEYPAD_COLUMN_NAME "/dev/keypad_column"
#define KEYPAD_COLUMN_RESET_VALUE 0
#define KEYPAD_COLUMN_SPAN 16
#define KEYPAD_COLUMN_TYPE "altera_avalon_pio"


/*
 * keypad_row configuration
 *
 */

#define ALT_MODULE_CLASS_keypad_row altera_avalon_pio
#define KEYPAD_ROW_BASE 0x15020
#define KEYPAD_ROW_BIT_CLEARING_EDGE_REGISTER 0
#define KEYPAD_ROW_BIT_MODIFYING_OUTPUT_REGISTER 0
#define KEYPAD_ROW_CAPTURE 0
#define KEYPAD_ROW_DATA_WIDTH 4
#define KEYPAD_ROW_DO_TEST_BENCH_WIRING 0
#define KEYPAD_ROW_DRIVEN_SIM_VALUE 0
#define KEYPAD_ROW_EDGE_TYPE "NONE"
#define KEYPAD_ROW_FREQ 50000000
#define KEYPAD_ROW_HAS_IN 0
#define KEYPAD_ROW_HAS_OUT 1
#define KEYPAD_ROW_HAS_TRI 0
#define KEYPAD_ROW_IRQ -1
#define KEYPAD_ROW_IRQ_INTERRUPT_CONTROLLER_ID -1
#define KEYPAD_ROW_IRQ_TYPE "NONE"
#define KEYPAD_ROW_NAME "/dev/keypad_row"
#define KEYPAD_ROW_RESET_VALUE 0
#define KEYPAD_ROW_SPAN 16
#define KEYPAD_ROW_TYPE "altera_avalon_pio"


/*
 * ram configuration
 *
 */

#define ALT_MODULE_CLASS_ram altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x0
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "MicroP_ram"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/ram"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 64000
#define RAM_SPAN 64000
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * sysid_qsys configuration
 *
 */

#define ALT_MODULE_CLASS_sysid_qsys altera_avalon_sysid_qsys
#define SYSID_QSYS_BASE 0x15098
#define SYSID_QSYS_ID 0
#define SYSID_QSYS_IRQ -1
#define SYSID_QSYS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_QSYS_NAME "/dev/sysid_qsys"
#define SYSID_QSYS_SPAN 8
#define SYSID_QSYS_TIMESTAMP 1737288382
#define SYSID_QSYS_TYPE "altera_avalon_sysid_qsys"


/*
 * ultrasonic_in configuration
 *
 */

#define ALT_MODULE_CLASS_ultrasonic_in altera_avalon_pio
#define ULTRASONIC_IN_BASE 0x10030
#define ULTRASONIC_IN_BIT_CLEARING_EDGE_REGISTER 0
#define ULTRASONIC_IN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ULTRASONIC_IN_CAPTURE 0
#define ULTRASONIC_IN_DATA_WIDTH 1
#define ULTRASONIC_IN_DO_TEST_BENCH_WIRING 0
#define ULTRASONIC_IN_DRIVEN_SIM_VALUE 0
#define ULTRASONIC_IN_EDGE_TYPE "NONE"
#define ULTRASONIC_IN_FREQ 50000000
#define ULTRASONIC_IN_HAS_IN 1
#define ULTRASONIC_IN_HAS_OUT 0
#define ULTRASONIC_IN_HAS_TRI 0
#define ULTRASONIC_IN_IRQ -1
#define ULTRASONIC_IN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ULTRASONIC_IN_IRQ_TYPE "NONE"
#define ULTRASONIC_IN_NAME "/dev/ultrasonic_in"
#define ULTRASONIC_IN_RESET_VALUE 0
#define ULTRASONIC_IN_SPAN 16
#define ULTRASONIC_IN_TYPE "altera_avalon_pio"


/*
 * ultrasonic_out configuration
 *
 */

#define ALT_MODULE_CLASS_ultrasonic_out altera_avalon_pio
#define ULTRASONIC_OUT_BASE 0x15030
#define ULTRASONIC_OUT_BIT_CLEARING_EDGE_REGISTER 0
#define ULTRASONIC_OUT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ULTRASONIC_OUT_CAPTURE 0
#define ULTRASONIC_OUT_DATA_WIDTH 1
#define ULTRASONIC_OUT_DO_TEST_BENCH_WIRING 0
#define ULTRASONIC_OUT_DRIVEN_SIM_VALUE 0
#define ULTRASONIC_OUT_EDGE_TYPE "NONE"
#define ULTRASONIC_OUT_FREQ 50000000
#define ULTRASONIC_OUT_HAS_IN 0
#define ULTRASONIC_OUT_HAS_OUT 1
#define ULTRASONIC_OUT_HAS_TRI 0
#define ULTRASONIC_OUT_IRQ -1
#define ULTRASONIC_OUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ULTRASONIC_OUT_IRQ_TYPE "NONE"
#define ULTRASONIC_OUT_NAME "/dev/ultrasonic_out"
#define ULTRASONIC_OUT_RESET_VALUE 0
#define ULTRASONIC_OUT_SPAN 16
#define ULTRASONIC_OUT_TYPE "altera_avalon_pio"


/*
 * video_character_buffer_with_dma_0_avalon_char_buffer_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_buffer_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_BASE 0x12000
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_buffer_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_SPAN 8192
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_BUFFER_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * video_character_buffer_with_dma_0_avalon_char_control_slave configuration
 *
 */

#define ALT_MODULE_CLASS_video_character_buffer_with_dma_0_avalon_char_control_slave altera_up_avalon_video_character_buffer_with_dma
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_BASE 0x150a8
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_NAME "/dev/video_character_buffer_with_dma_0_avalon_char_control_slave"
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_SPAN 8
#define VIDEO_CHARACTER_BUFFER_WITH_DMA_0_AVALON_CHAR_CONTROL_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"

#endif /* __SYSTEM_H_ */
