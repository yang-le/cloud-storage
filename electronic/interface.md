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

### Pins

| Pin# | Side B | Side A | Comments |
| ---- | ------ | ------ | -------- |
| 1    | -12V   | TRST#  | JTAG port pins (optional) |
| 2    | TCK    | +12V   | JTAG port pins (optional) |
| 3    | Ground | TMS    | JTAG port pins (optional) |
| 4    | TDO    | TDI    | JTAG port pins (optional) |
| 5    | +5V    | +5V    |          |
| 6    | +5V    | INTA#  | Interrupt lines (open-drain) |
| 7    | INTB#  | INTC#  | Interrupt lines (open-drain) |
| 8    | INTD#  | +5V    | Interrupt lines (open-drain) |
| 9    | PRSNT1#|Reserved| Pulled low to indicate 7.5 or 25W power required |
| 10   |Reserved| IOPWR  | +5V or +3.3V |
| 11   | PRSNT2#|Reserved| Pulled low to indicate 7.5 or 25W power required |
| 12   | Ground | Ground | Key notch for 3.3V-capable cards |
| 13   | Ground | Ground | Key notch for 3.3V-capable cards |
| 14   |Reserved|3.3V aux| Standby power (optional) |
| 15   | Ground | RST#   | Bus reset |
| 16   | CLK    | IOPWR  | 33/66 MHz clock |
| 17   | Ground | GNT#   | Bus grant from motherboard to card |
| 18   | REQ#   | Ground | Bus request from card to motherboard |
| 19   | IOPWR  | PME#   | Power management event (optional) 3.3V, open drain, active low |
| 20   | AD[31] | AD[30] | Address / data bus (upper half) |
| 21   | AD[29] | +3.3V  | Address / data bus (upper half) |
| 22   | Ground | AD[28] | Address / data bus (upper half) |
| 23   | AD[27] | AD[26] | Address / data bus (upper half) |
| 24   | AD[25] | Ground | Address / data bus (upper half) |
| 25   | +3.3V  | AD[24] | Address / data bus (upper half) |
| 26   |C/BE[3]#| IDSEL  | Address / data bus (upper half) |
| 27   | AD[23] | +3.3V  | Address / data bus (upper half) |
| 28   | Ground | AD[22] | Address / data bus (upper half) |
| 29   | AD[21] | AD[20] | Address / data bus (upper half) |
| 30   | AD[19] | Ground | Address / data bus (upper half) |
| 31   | +3.3V  | AD[18] | Address / data bus (upper half) |
| 32   | AD[17] | AD[16] | Address / data bus (upper half) |
| 33   |C/BE[2]#| +3.3V  | Address / data bus (upper half) |
| 34   | Ground | FRAME# | Bus transfer in progress |
| 35   | IRDY#  | Ground | Initiator ready |
| 36   | +3.3V  | TRDY#  | Target ready |
| 37   | DEVSEL#| Ground | Target selected |
| 38   | PCIXCAP / Ground | STOP # | PCI-X capable; Target request halt |
| 39   | LOCK#  | +3.3V  | Locked transaction |
| 40   | PERR#  | SMBCLK / SDONE | Parity error; SMBus clock or Snoop done (obsolete) |
| 41   | +3.3V  | SMBDAT / SBO# | SMBus data or Snoop backoff (obsolete) |
| 42   | SERR#  | Ground | System error |
| 43   | +3.3V  | PAR    | Even parity over AD[31:00] and C/BE[3:0]# |
| 44   |C/BE[1]#| AD[15] | Address / data bus (higher half) |
| 45   | AD[14] | +3.3V  | Address / data bus (higher half) |
| 46   | Ground | AD[13] | Address / data bus (higher half) |
| 47   | AD[12] | AD[11] | Address / data bus (higher half) |
| 48   | AD[10] | Ground | Address / data bus (higher half) |
| 49   | M66EN / Ground | AD[09] | Address / data bus (higher half) |
| 50   | Ground | Ground | Key notch for 5V-capable cards |
| 51   | Ground | Ground | Key notch for 5V-capable cards |
| 52   | AD[08] |C/BE[0]#| Address / data bus (lower half) |
| 53   | AD[07] | +3.3V  | Address / data bus (lower half) |
| 54   | +3.3V  | AD[06] | Address / data bus (lower half) |
| 55   | AD[05] | AD[04] | Address / data bus (lower half) |
| 56   | AD[03] | Ground | Address / data bus (lower half) |
| 57   | Ground | AD[02] | Address / data bus (lower half) |
| 58   | AD[01] | AD[00] | Address / data bus (lower half) |
| 59   | IOPWR  | IOPWR  | |
| 59   | ACK64# | REQ64# | For 64-bit extension; no connect for 32-bit devices |
| 61   | +5V    | +5V    | |
| 62   | +5V    | +5V    | |
| -    |        |        | Notch |
| 63   |Reserved| Ground | |
| 64   | Ground |C/BE[7]#| |
| 65   |C/BE[6]#|C/BE[5]#| |
| 66   |C/BE[4]#| IOPWR    | |
| 67   | Ground | PAR64  | |
| 68   | AD[63] | AD[62] | |
| 69   | AD[61] | Ground | |
| 70   | IOPWR  | AD[60] | |
| 71   | AD[59] | AD[58] | |
| 72   | AD[57] | Ground | |
| 73   | Ground | AD[56] | |
| 74   | AD[55] | AD[54] | |
| 75   | AD[53] | IOPWR  | |
| 76   | Ground | AD[52] | |
| 77   | AD[51] | AD[50] | |
| 78   | AD[49] | Ground | |
| 79   | IOPWR  | AD[48] | |
| 80   | AD[47] | AD[46] | |
| 81   | AD[45] | Ground | |
| 82   | Ground | AD[44] | |
| 83   | AD[43] | AD[42] | |
| 84   | AD[42] | IOPWR  | |
| 85   | Ground | AD[40] | |
| 86   | AD[39] | AD[38] | |
| 87   | AD[37] | Ground | |
| 88   | IOPWR  | AD[36] | |
| 89   | AD[35] | AD[34] | |
| 90   | AD[33] | Ground | |
| 91   | Ground | AD[32] | |
| 92   |Reserved|Reserved| |
| 93   |Reserved| Ground | |
| 94   | Ground |Reserved| |

## AGP

## PCI Express
