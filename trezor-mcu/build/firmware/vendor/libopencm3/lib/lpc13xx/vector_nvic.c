/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 *
 * This part needs to get included in the compilation unit where
 * blocking_handler gets defined due to the way #pragma works.
 */


/** @defgroup CM3_nvic_isrpragmas_LPC13xx User interrupt service routines (ISR) defaults for LPC 13xx series
    @ingroup CM3_nvic_isrpragmas

    @{*/

#pragma weak pio0_3_isr = blocking_handler
#pragma weak pio2_0_isr = blocking_handler
#pragma weak pio0_11_isr = blocking_handler
#pragma weak pio3_3_isr = blocking_handler
#pragma weak pio1_0_isr = blocking_handler
#pragma weak pio2_6_isr = blocking_handler
#pragma weak usb_fiq_isr = blocking_handler
#pragma weak pio2_3_isr = blocking_handler
#pragma weak pio0_1_isr = blocking_handler
#pragma weak pio1_3_isr = blocking_handler
#pragma weak pio0_10_isr = blocking_handler
#pragma weak pio2_8_isr = blocking_handler
#pragma weak bod_isr = blocking_handler
#pragma weak pio1_6_isr = blocking_handler
#pragma weak pio0_8_isr = blocking_handler
#pragma weak ct32b0_isr = blocking_handler
#pragma weak usb_isr = blocking_handler
#pragma weak pio2_10_isr = blocking_handler
#pragma weak pio1_9_isr = blocking_handler
#pragma weak pio1_8_isr = blocking_handler
#pragma weak ssp1_isr = blocking_handler
#pragma weak pio0_7_isr = blocking_handler
#pragma weak pio1_1_isr = blocking_handler
#pragma weak pio1_11_isr = blocking_handler
#pragma weak pio2_7_isr = blocking_handler
#pragma weak pio3_2_isr = blocking_handler
#pragma weak ct16b1_isr = blocking_handler
#pragma weak wdt_isr = blocking_handler
#pragma weak pio2_5_isr = blocking_handler
#pragma weak pio2_9_isr = blocking_handler
#pragma weak ct16b0_isr = blocking_handler
#pragma weak pio1_7_isr = blocking_handler
#pragma weak pio1_isr = blocking_handler
#pragma weak pio0_4_isr = blocking_handler
#pragma weak pio1_2_isr = blocking_handler
#pragma weak ssp0_isr = blocking_handler
#pragma weak pio0_5_isr = blocking_handler
#pragma weak pio1_10_isr = blocking_handler
#pragma weak pio0_0_isr = blocking_handler
#pragma weak uart_isr = blocking_handler
#pragma weak pio0_6_isr = blocking_handler
#pragma weak pio2_1_isr = blocking_handler
#pragma weak pio1_4_isr = blocking_handler
#pragma weak pio3_isr = blocking_handler
#pragma weak adc_isr = blocking_handler
#pragma weak pio3_0_isr = blocking_handler
#pragma weak pio3_1_isr = blocking_handler
#pragma weak pio2_4_isr = blocking_handler
#pragma weak pio2_11_isr = blocking_handler
#pragma weak pio2_2_isr = blocking_handler
#pragma weak pio0_2_isr = blocking_handler
#pragma weak i2c0_isr = blocking_handler
#pragma weak ct32b1_isr = blocking_handler
#pragma weak pio2_isr = blocking_handler
#pragma weak pio0_9_isr = blocking_handler
#pragma weak pio1_5_isr = blocking_handler

/**@}*/

/* Initialization template for the interrupt vector table. This definition is
 * used by the startup code generator (vector.c) to set the initial values for
 * the interrupt handling routines to the chip family specific _isr weak
 * symbols. */

#define IRQ_HANDLERS \
    [NVIC_PIO0_3_IRQ] = pio0_3_isr, \
    [NVIC_PIO2_0_IRQ] = pio2_0_isr, \
    [NVIC_PIO0_11_IRQ] = pio0_11_isr, \
    [NVIC_PIO3_3_IRQ] = pio3_3_isr, \
    [NVIC_PIO1_0_IRQ] = pio1_0_isr, \
    [NVIC_PIO2_6_IRQ] = pio2_6_isr, \
    [NVIC_USB_FIQ_IRQ] = usb_fiq_isr, \
    [NVIC_PIO2_3_IRQ] = pio2_3_isr, \
    [NVIC_PIO0_1_IRQ] = pio0_1_isr, \
    [NVIC_PIO1_3_IRQ] = pio1_3_isr, \
    [NVIC_PIO0_10_IRQ] = pio0_10_isr, \
    [NVIC_PIO2_8_IRQ] = pio2_8_isr, \
    [NVIC_BOD_IRQ] = bod_isr, \
    [NVIC_PIO1_6_IRQ] = pio1_6_isr, \
    [NVIC_PIO0_8_IRQ] = pio0_8_isr, \
    [NVIC_CT32B0_IRQ] = ct32b0_isr, \
    [NVIC_USB_IRQ] = usb_isr, \
    [NVIC_PIO2_10_IRQ] = pio2_10_isr, \
    [NVIC_PIO1_9_IRQ] = pio1_9_isr, \
    [NVIC_PIO1_8_IRQ] = pio1_8_isr, \
    [NVIC_SSP1_IRQ] = ssp1_isr, \
    [NVIC_PIO0_7_IRQ] = pio0_7_isr, \
    [NVIC_PIO1_1_IRQ] = pio1_1_isr, \
    [NVIC_PIO1_11_IRQ] = pio1_11_isr, \
    [NVIC_PIO2_7_IRQ] = pio2_7_isr, \
    [NVIC_PIO3_2_IRQ] = pio3_2_isr, \
    [NVIC_CT16B1_IRQ] = ct16b1_isr, \
    [NVIC_WDT_IRQ] = wdt_isr, \
    [NVIC_PIO2_5_IRQ] = pio2_5_isr, \
    [NVIC_PIO2_9_IRQ] = pio2_9_isr, \
    [NVIC_CT16B0_IRQ] = ct16b0_isr, \
    [NVIC_PIO1_7_IRQ] = pio1_7_isr, \
    [NVIC_PIO1_IRQ] = pio1_isr, \
    [NVIC_PIO0_4_IRQ] = pio0_4_isr, \
    [NVIC_PIO1_2_IRQ] = pio1_2_isr, \
    [NVIC_SSP0_IRQ] = ssp0_isr, \
    [NVIC_PIO0_5_IRQ] = pio0_5_isr, \
    [NVIC_PIO1_10_IRQ] = pio1_10_isr, \
    [NVIC_PIO0_0_IRQ] = pio0_0_isr, \
    [NVIC_UART_IRQ] = uart_isr, \
    [NVIC_PIO0_6_IRQ] = pio0_6_isr, \
    [NVIC_PIO2_1_IRQ] = pio2_1_isr, \
    [NVIC_PIO1_4_IRQ] = pio1_4_isr, \
    [NVIC_PIO3_IRQ] = pio3_isr, \
    [NVIC_ADC_IRQ] = adc_isr, \
    [NVIC_PIO3_0_IRQ] = pio3_0_isr, \
    [NVIC_PIO3_1_IRQ] = pio3_1_isr, \
    [NVIC_PIO2_4_IRQ] = pio2_4_isr, \
    [NVIC_PIO2_11_IRQ] = pio2_11_isr, \
    [NVIC_PIO2_2_IRQ] = pio2_2_isr, \
    [NVIC_PIO0_2_IRQ] = pio0_2_isr, \
    [NVIC_I2C0_IRQ] = i2c0_isr, \
    [NVIC_CT32B1_IRQ] = ct32b1_isr, \
    [NVIC_PIO2_IRQ] = pio2_isr, \
    [NVIC_PIO0_9_IRQ] = pio0_9_isr, \
    [NVIC_PIO1_5_IRQ] = pio1_5_isr
