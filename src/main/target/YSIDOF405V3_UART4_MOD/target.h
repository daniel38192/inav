#pragma once

/*
 * YSIDOF405V3_UART4_MOD
 *
 * This target copies the effective configuration of OMNIBUSF4V3 (base variant,
 * no _SS or _ICM options) so the definitions can be tweaked independently.
 */

// Board identity
#define TARGET_BOARD_IDENTIFIER "OB43"
#define USBD_PRODUCT_STRING "Omnibus F4"

// Indicators
#define LED0                    PB5
#define BEEPER                  PB4
#define BEEPER_INVERTED

// I2C
#define USE_I2C
#define USE_I2C_DEVICE_2
#define I2C_DEVICE_2_SHARES_UART3
#define I2C_EXT_BUS BUS_I2C2
#define UG2864_I2C_BUS I2C_EXT_BUS

// IMU / Gyro
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1
#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW270_DEG

#define MPU6500_CS_PIN          MPU6000_CS_PIN
#define MPU6500_SPI_BUS         MPU6000_SPI_BUS
#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       IMU_MPU6000_ALIGN

#define USE_IMU_BMI270
#define IMU_BMI270_ALIGN        IMU_MPU6000_ALIGN
#define BMI270_SPI_BUS          MPU6000_SPI_BUS
#define BMI270_CS_PIN           MPU6000_CS_PIN

// Magnetometer / temperature
#define USE_MAG
#define MAG_I2C_BUS             I2C_EXT_BUS
#define USE_MAG_ALL
#define TEMPERATURE_I2C_BUS     I2C_EXT_BUS

// Barometer
#define USE_BARO
#define USE_BARO_BMP280
#define BMP280_SPI_BUS          BUS_SPI3
#define BMP280_CS_PIN           PB3
// External barometer support
#define BARO_I2C_BUS            I2C_EXT_BUS
#define USE_BARO_BMP085
#define USE_BARO_MS5611

// Pitot & rangefinder
#define PITOT_I2C_BUS           I2C_EXT_BUS
#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     I2C_EXT_BUS

// USB / VBUS
#define USE_VCP
#define VBUS_SENSING_PIN        PC5
#define VBUS_SENSING_ENABLED
#define USE_UART_INVERTER

// UARTs
#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9
#define UART1_AHB1_PERIPHERALS  RCC_AHB1Periph_DMA2

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6
#define INVERTER_PIN_UART6_RX   PC8
#define INVERTER_PIN_UART6_TX   PC9

// SoftSerial (base V3 variant)
#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_RX_PIN     PC6     // shared with UART6 TX
#define SOFTSERIAL_1_TX_PIN     PC6     // shared with UART6 TX
#define SERIAL_PORT_COUNT       5       // VCP, USART1, USART3, USART6, SOFTSERIAL1

// Default RX setup
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART1

// SPI buses
#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_SPI_DEVICE_3
#define SPI3_NSS_PIN            PA15
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

// OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI3
#define MAX7456_CS_PIN          PA15

// Storage / Blackbox
#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT
#define USE_SDCARD
#define USE_SDCARD_SPI
#define SDCARD_SPI_BUS          BUS_SPI2
#define SDCARD_CS_PIN           SPI2_NSS_PIN
#define SDCARD_DETECT_PIN       PB7
#define SDCARD_DETECT_INVERTED

// ADCs
#define USE_ADC
#define ADC_CHANNEL_1_PIN               PC1
#define ADC_CHANNEL_2_PIN               PC2
//Disable channel 3
#define ADC_CHANNEL_3_PIN               NONE
#define CURRENT_METER_ADC_CHANNEL       ADC_CHN_1
#define VBAT_ADC_CHANNEL                ADC_CHN_2
//Disable RSSI
#define RSSI_ADC_CHANNEL                NONE

// Sensors set
#define SENSORS_SET (SENSOR_ACC|SENSOR_MAG|SENSOR_BARO)

// LED strip
#define USE_LED_STRIP
#define WS2811_PIN                   PB6

// Features
#define DISABLE_RX_PWM_FEATURE
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_BLACKBOX | FEATURE_VBAT | FEATURE_OSD)

// Bind / BLHeli
#define USE_SPEKTRUM_BIND
#define BIND_PIN                PB11 // USART3 RX
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

// PWM outputs
#define MAX_PWM_OUTPUT_PORTS    6
#define TARGET_MOTOR_COUNT      6
#define USE_DSHOT
#define USE_ESC_SENSOR

// GPIO masks
#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff
