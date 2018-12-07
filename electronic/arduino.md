# Arduino

## Entry Level

### Boards

#### Uno

"Uno" means one in Italian and was chosen to mark the release of Arduino Software (IDE) 1.0.
The Uno board and version 1.0 of Arduino Software (IDE) were the reference versions of Arduino,
now evolved to newer releases.

- 主芯片为ATmega328P
  - 8位AVR单片机
  - 主频16MHz
  - 32KB Flash
  - 2KB SRAM
  - 1KB EEPROM
  - 操作电压 5V
  - 6路AD输入
  - 4路GPIO(其中6路支持PWM输出)
- USB芯片为ATmega8u2/ATmega16u2

#### Leonardo

Similar to an Arduino UNO, can be recognized by computer as a mouse or keyboard.

主芯片为ATmega32u4, 因其内置USB 2.0支持而免去了USB芯片。

#### 101

It keeps the same robust form factor and peripheral list of the UNO with the addition of onboard Bluetooth LE capabilities and a 6-axis accelerometer/gyro to help you easily expand your creativity into the connected world. 

这是Arduino与Intel合作的一块板子，核心为Intel Curie模块。
该模块内置运算单元、运动传感器和低功耗蓝牙，以及由Intel开发的开源RTOS固件。

- CPU为Intel Quark SE C1000
  - x86架构
  - 32MHz主频
  - 32位地址/数据总线
  - 8KB L1 指令缓存
- 传感器子系统核心为ARC EM4 ~DSP~
  - ARCv2架构
  - 内置浮点运算单元

#### Esplora

The Arduino Esplora is an Arduino Leonardo based board with integrated sensors and actuators.

Leonardo的衍生版，额外增加了声光输出，手柄、滑杆、温度传感器、加速度计、麦克风和光照传感器。支持外接彩色LCD屏幕。

### Modules

#### Micro

Arduino Micro is the **smallest** board of the family, easy to integrate it in everyday objects to make them interactive.

Leonardo的微型版，Arduino和Adafruit合作推出。

#### Nano

The Arduino Nano is a compact board similar to the UNO.

Uno的微型版。

- 主芯片为ATmega328P
- USB芯片为FTDI生产的FT232R。

#### ~Mini~

The Arduino Mini is a very compact version of the Arduino Nano without an on-board USB to Serial connection.

衍生自Nano，去掉了USB芯片，已停产。

## Enhanced Features

### Boards

#### Mega

The MEGA 2560 is designed for more complex projects.

- 主芯片为ATMemga2560
  - 支持54路GPIO（其中15路可用作PWM输出）
  - 16路模拟输入
  - 4路UARTs

#### Zero

Arduino Zero is a simple and powerful 32-bit extension of the platform established by the UNO. 

- 主芯片为ATSAMD21G18
  - 32位 Cortex M0+ ARM
  - 工作电压3.3V
  - 主频48MHz
  - 256KB Flash
  - 32KB SRAM
  - 内置12通道DMA
  - 32位CRC生成器
  - 带时钟/日历功能的32位RTC
  - 20路GPIO(包括6路12位ADC和1路10位的DAC，其中18路支持PWM，19路支持外部中断)
- 调试芯片为A06-0736 EDBG。

#### Due

The Arduino Due is the first Arduino board based on a 32-bit ARM core microcontroller.

- 主芯片为AT91SAM3X8E
  - 32位 Cortex M3 ARM.
  - 工作电压3.3V
  - 主频84MHz
  - 512KB Flash
  - 96KB SRAM。
  - 提供54路GPIO（其中12路支持PWM输出），12路模拟输入和2路模拟输出（DAC）。
- USB芯片为ATmega16u2。

#### ~Mega ADK~

#### ~M0~

已停产，被Zero替代。

#### ~M0 Pro~

已停产，被Zero替代。

### Modules

#### MKR Zero

The MKR ZERO brings you the power of a Zero in the smaller format established by the MKR form factor.
It has an on-board SD connector with dedicated SPI interfaces (SPI1) that allows you to play with MUSIC files with no extra hardware!

该模组板载SD卡插槽，支持3.7V最小700mAh的Li-Po 单电芯充电。

## Internet of Things

### Boards

#### Yún

The Yún with the power of a Linux based system that enables advanced network connections and applications.

- 主芯片 ATmega32u4
- 无线模块 Qualcomm Atheros AR9331
  - 核心为MIPS 24K CPU
- USB2.0 HUB及SD读卡器芯片 AU6351GL

#### ~Ethernet~

An Arduino Uno incorporating a WizNet W5100 TCP/IP Ethernet Controller.

已停产。

#### ~Tian~

The new Arduino Tian board is powered by Atmel’s SAMD21 MCU,
featuring a 32-bit ARM Cortex® M0+ core and a Qualcomm Atheros AR9342,
which is an highly integrated MIPS processor operating at up to 533MHz and feature-rich IEEE802.11n 2x2 2.4/5 GHz dual-band WiFi module.
Qualcomm Atheros MIPS supports a Linux distribution, based on OpenWRT named Linino.
The Arduino Tian has also a build in 4GB eMMC memory that will can be helpful to build your projects.
It is possible to Switch ON/OFF the Linux port from the MCU to reduce the power consumption.

- 主芯片 ATSAMD21G18A
- USB芯片 CP2105GM
- 无线模块 Qualcomm Atheros AR9342
  - 核心为MIPS 74K CPU
- 以太网接口芯片 AR8035
- 蓝牙芯片 CSR8510
- USB2.0 HUB及SD读卡器芯片 AU6259 + AU6350
- 8MB SPI 闪存芯片 W25Q64FVSSIGT

已停产。

#### ~Industrial 101~

The Industrial 101 is a small form-factor Yún designed for product integration.

已停产

#### ~Leonardo Eth~

All the fun of a Leonardo, plus an Ethernet port to extend your project to the IoT world.

- 主芯片 ATmega32u4
- 以太网接口芯片 W5500

已停产

#### MKR FOX 1200

#### MKR WAN 1300

#### MKR GSM 1400

#### MKR WiFi 1010

#### Uno WiFi Rev2

It's basically an Arduino Uno Rev3 with more kick:
It comes with a brand new 8-bit microprocessor from Microchip, and an onboard IMU (Inertial Measurement Unit).
As for the WiFi connection, that's made secure with the new ECC608 crypto chip accelerator.

- 主芯片 ATmega4809
- USB芯片 ATMEGA32U4
- 加密芯片 ATECC608A
- 6DoF IMU LSM6DSM
- 以太网接口芯片 W5500
- Wi-Fi模块 NINA-W132

#### MKR NB 1500

#### MKR VIDOR 4000

### Modules

#### MKR1000

#### Yún MINI

## Wearable
