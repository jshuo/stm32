/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 *
 * This part needs to get included in the compilation unit where
 * blocking_handler gets defined due to the way #pragma works.
 */


/** @defgroup CM3_nvic_isrpragmas_LPC17xx User interrupt service routines (ISR) defaults for LPC 17xx series
    @ingroup CM3_nvic_isrpragmas

    @{*/

#pragma weak can_act_isr = blocking_handler
#pragma weak timer1_isr = blocking_handler
#pragma weak uart3_isr = blocking_handler
#pragma weak eint0_isr = blocking_handler
#pragma weak can_isr = blocking_handler
#pragma weak ethernet_isr = blocking_handler
#pragma weak wdt_isr = blocking_handler
#pragma weak i2s_isr = blocking_handler
#pragma weak i2c2_isr = blocking_handler
#pragma weak qei_isr = blocking_handler
#pragma weak motor_pwm_isr = blocking_handler
#pragma weak eint3_isr = blocking_handler
#pragma weak eint1_isr = blocking_handler
#pragma weak gpdma_isr = blocking_handler
#pragma weak ssp1_isr = blocking_handler
#pragma weak usb_isr = blocking_handler
#pragma weak pwm_isr = blocking_handler
#pragma weak eint2_isr = blocking_handler
#pragma weak pll0_isr = blocking_handler
#pragma weak ssp0_isr = blocking_handler
#pragma weak i2c1_isr = blocking_handler
#pragma weak uart0_isr = blocking_handler
#pragma weak timer3_isr = blocking_handler
#pragma weak pll1_isr = blocking_handler
#pragma weak timer0_isr = blocking_handler
#pragma weak rit_isr = blocking_handler
#pragma weak i2c0_isr = blocking_handler
#pragma weak uart1_isr = blocking_handler
#pragma weak rtc_isr = blocking_handler
#pragma weak spi_isr = blocking_handler
#pragma weak adc_isr = blocking_handler
#pragma weak bod_isr = blocking_handler
#pragma weak uart2_isr = blocking_handler
#pragma weak timer2_isr = blocking_handler
#pragma weak usb_act_isr = blocking_handler

/**@}*/

/* Initialization template for the interrupt vector table. This definition is
 * used by the startup code generator (vector.c) to set the initial values for
 * the interrupt handling routines to the chip family specific _isr weak
 * symbols. */

#define IRQ_HANDLERS \
    [NVIC_CAN_ACT_IRQ] = can_act_isr, \
    [NVIC_TIMER1_IRQ] = timer1_isr, \
    [NVIC_UART3_IRQ] = uart3_isr, \
    [NVIC_EINT0_IRQ] = eint0_isr, \
    [NVIC_CAN_IRQ] = can_isr, \
    [NVIC_ETHERNET_IRQ] = ethernet_isr, \
    [NVIC_WDT_IRQ] = wdt_isr, \
    [NVIC_I2S_IRQ] = i2s_isr, \
    [NVIC_I2C2_IRQ] = i2c2_isr, \
    [NVIC_QEI_IRQ] = qei_isr, \
    [NVIC_MOTOR_PWM_IRQ] = motor_pwm_isr, \
    [NVIC_EINT3_IRQ] = eint3_isr, \
    [NVIC_EINT1_IRQ] = eint1_isr, \
    [NVIC_GPDMA_IRQ] = gpdma_isr, \
    [NVIC_SSP1_IRQ] = ssp1_isr, \
    [NVIC_USB_IRQ] = usb_isr, \
    [NVIC_PWM_IRQ] = pwm_isr, \
    [NVIC_EINT2_IRQ] = eint2_isr, \
    [NVIC_PLL0_IRQ] = pll0_isr, \
    [NVIC_SSP0_IRQ] = ssp0_isr, \
    [NVIC_I2C1_IRQ] = i2c1_isr, \
    [NVIC_UART0_IRQ] = uart0_isr, \
    [NVIC_TIMER3_IRQ] = timer3_isr, \
    [NVIC_PLL1_IRQ] = pll1_isr, \
    [NVIC_TIMER0_IRQ] = timer0_isr, \
    [NVIC_RIT_IRQ] = rit_isr, \
    [NVIC_I2C0_IRQ] = i2c0_isr, \
    [NVIC_UART1_IRQ] = uart1_isr, \
    [NVIC_RTC_IRQ] = rtc_isr, \
    [NVIC_SPI_IRQ] = spi_isr, \
    [NVIC_ADC_IRQ] = adc_isr, \
    [NVIC_BOD_IRQ] = bod_isr, \
    [NVIC_UART2_IRQ] = uart2_isr, \
    [NVIC_TIMER2_IRQ] = timer2_isr, \
    [NVIC_USB_ACT_IRQ] = usb_act_isr
