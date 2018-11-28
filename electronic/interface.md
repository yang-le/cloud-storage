# Interfaces

## PATA

The ATA interface itself evolved in several stages from Western Digital's original **Integrated Drive Electronics** (IDE) interface.

### Pins

| Pin# | Function |
| ---- | -------- |
| 1    | Reset    |
| 2    | Ground   |
| 3    | Data 7   |
| 4    | Data 8   |
| 5    | Data 6   |
| 6    | Data 9   |
| 7    | Data 5   |
| 8    | Data 10  |
| 9    | Data 4   |
| 10   | Data 11  |
| 11   | Data 3   |
| 12   | Data 12  |
| 13   | Data 2   |
| 14   | Data 13  |
| 15   | Data 1   |
| 16   | Data 14  |
| 17   | Data 0   |
| 18   | Data 15  |
| 19   | Ground   |
| 20   | Key / VCC_in |
| 21   | DDRQ     |
| 22   | Ground   |
| 23   | I/O write|
| 24   | Ground   |
| 25   | I/O read |
| 26   | Ground   |
| 27   | IOCHRDY  |
| 28   | Cable select |
| 29   | DDACK    |
| 30   | Ground   |
| 31   | IRQ      |
| 32   | No connect |
| 33   | Addr 1   |
| 34   | GPIO_DMA66_Detect |
| 35   | Addr 0   |
| 36   | Addr 2   |
| 37   | Chip select 1P |
| 38   | Chip select 3P |
| 39   | Activity |
| 40   | Ground   |


## SATA

Serial AT Attachment is a computer bus interface that connects **host bus adapters** to **mass storage devices** such as hard disk drivers, optical drivers, and solid-state drivers.

Serial ATA succeeded the older **Parallel ATA** standard.
Before SATA's introduction in 2000, PATA was simply known as ATA.
The "AT Attachment" name originated after the 1984 release of the **IBM Personal Computer AT**, more commonly known as the IBM AT.
"AT" was IBM's abbreviation for "Advanced Technology".

SATA是一种连接主机总线适配器和诸如硬盘，光驱，固态硬盘之类的大容量存储设备的计算机总线接口。

SATA是其前辈PATA标准的继任者。
在2000年以前，SATA还未被发明出来的时候，PATA就被简单地称作ATA。
ATA的名字来自1984年发布的IBM个人计算机AT，它更广为人知的名字是IBM AT。
AT是IBM对"Advanced Technology"的缩写。

### Revisions
- SATA 1.0 2003 150MB/s
- SATA 2.0 2004 300MB/s
  - SATA 2.5 2005
  - SATA 2.6 2007
- SATA 3.0 2008 600MB/s
  - SATA 3.1 2011
  - SATA 3.2 2013
  - SATA 3.3 2016

### Pins

| Pin# | Function |
| ---- | -------- |
| 1    | Ground   |
| 2    | A+ (transmit) |
| 3    | A- (transmit) |
| 4    | Ground   |
| 5    | B- (reveive) |
| 6    | B+ (reveive) |
| 7    | Ground   |
| -    | Coding Notch |
| 1    | 3.3V Power |
| 2    | 3.3V Power |
| 3    | 3.3V Power Pre-charge / Power Disable (PWDIS) mode |
| 4    | Ground   |
| 5    | Ground   |
| 6    | Ground   |
| 7    | 5V Power Pre-charge |
| 8    | 5V Power |
| 9    | 5V Power |
| 10   | Ground   |
| 11   | Staggered spinup / activity |
| 12   | Ground   |
| 13   | 12V Power Pre-charge |
| 14   | 12V Power|
| 15   | 12V Power|

## SCSI

Small Computer System Interface

## SAS

Serial Attached SCSI

## ACHI

Advanced Host Controller Interface

## PCI

PCI is a local computer bus for attaching hardware devices in a computer.
PCI is the initialism for **Peripheral Component Interconnect** and is part of the PCI Local Bus standard.

## AGP

## PCI Express

