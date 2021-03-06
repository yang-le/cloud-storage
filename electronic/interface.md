# Interfaces

## DDR SDRAM

DDR SDRAM means double data rate synchronous dynamic random-access memory.

### Revisions

| standard | Release year | Transfer rate (MT/s) | DIMM pins |
| -------- | ------------ | -------------------- | --------- |
| DDR 1    | 2000         | 200 – 400            | 184       |
| DDR 2    | 2003         | 400 – 1066.67        | 240       |
| DDR 3    | 2007         | 800 – 2133.33        | 240       |
| DDR 4    | 2014         | 1600 – 3200          | 288       |

### Pins


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

### Revisions

- PCI 1.0 1992
- PCI 2.0 1993
  - PCI 2.1 1995
  - PCI 2.2 1998
  - PCI 2.3 2002
- PCI 3.0 2004

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

PCI Express (Peripheral Component Interconnect Express), officially abbreviated as PCIe or PCI-e, is a high-speed serial computer expansion bus standard, designed to replace the older PCI, PCI-X and AGP bus standards.

### Revisions

| PCI Express version | Introduced | Transfer rate | x1 | x2 | x4 | x8 | x16 |
| ------------------- | ---------- | ------------- | -- | -- | -- | -- | --- |
| 1.0                 | 2003       | 2.5 GT/s      | 250 MB/s | 0.50 GB/s | 1.0 GB/s | 2.0 GB/s | 4.0 GB/s |
| 2.0                 | 2007       | 5.0 GT/s      | 500 MB/s | 1.0 GB/s | 2.0 GB/s | 4.0 GB/s | 8.0 GB/s |
| 3.0                 | 2010       | 8.0 GT/s      | 984.6 MB/s | 1.97 GB/s | 3.94 GB/s | 7.88 GB/s | 15.75 GB/s |
| 4.0                 | 2017       | 16.0 GT/s     | 1969 MB/s | 3.94 GB/s | 7.88 GB/s | 15.75 GB/s | 31.51 GB/s |
| 5.0                 | 2019       | 32.0 GT/s     | 3938 MB/s | 7.88 GB/s | 15.75 GB/s | 31.51 GB/s | 63.0 GB/s |

### Pins

| Pin# | Side B | Side A | Description |
| ---- | ------ | ------ | ----------- |
| 1    | +12V   | PRSNT1#| Must connect to farthest PRSNT2# pin |
| 2    | +12V   | +12V   | Main power pins |
| 3    | +12V   | +12V   | Main power pins |
| 4    | Ground | Ground | |
| 5    | SMCLK  | TCK    | SMBus and JTAG port pins |
| 6    | SMDAT  | TDI    | SMBus and JTAG port pins |
| 7    | Ground | TDO    | SMBus and JTAG port pins |
| 8    | +3.3V  | TMS    | SMBus and JTAG port pins |
| 9    | TRST#  | +3.3V  | SMBus and JTAG port pins |
| 10   | +3.3V aux | +3.3V | Standby power |
| 11   | WAKE#  | PERST# | Link reactivation; fundamental reset |
| -    |        |        | Key notch |
| 12   |CLKREQ# | Ground | Clock Request Signal |
| 13   | Ground | REFCLK+| Reference clock differential pair |
| 14   | HSOp(0)| REFCLK-| Lane 0 transmit data, + and - |
| 15   | HSOn(0)| Ground | Lane 0 transmit data, + and - |
| 16   | Ground | HSIp(0)| Lane 0 receive data, + and - |
| 17   | PRSNT2#| HSIn(0)| Lane 0 receive data, + and - |
| 18   | Ground | Ground | PCI Express x1 cards end at pin 18 |
| 19   | HSOp(1)|Reserved| Lane 1 transmit data, + and - |
| 20   | HSOn(1)| Ground | Lane 1 transmit data, + and - |
| 21   | Ground | HSIp(1)| Lane 1 receive data, + and - |
| 22   | Ground | HSIn(1)| Lane 1 receive data, + and - |
| 23   | HSOp(2)| Ground | Lane 2 transmit data, + and - |
| 24   | HSOn(2)| Ground | Lane 2 transmit data, + and - |
| 25   | Ground | HSIp(2)| Lane 2 receive data, + and - |
| 26   | Ground | HSIn(2)| Lane 2 receive data, + and - |
| 27   | HSOp(3)| Ground | Lane 3 transmit data, + and - |
| 28   | HSOn(3)| Ground | Lane 3 transmit data, + and - |
| 29   | Ground | HSIp(3)| Lane 3 receive data, + and - |
| 30   |PWRBRK# | HSIn(3)| Lane 3 receive data, + and - |
| 31   | PRSNT2#| Ground | |
| 32   | Ground |Reserved| PCI Express x4 cards end at pin 32 |
| 33   | HSOp(4)|Reserved| Lane 4 transmit data, + and - |
| 34   | HSOn(4)| Ground | Lane 4 transmit data, + and - |
| 35   | Ground | HSIp(4)| Lane 4 receive data, + and - |
| 36   | Ground | HSIn(4)| Lane 4 receive data, + and - |
| 37   | HSOp(5)| Ground | Lane 5 transmit data, + and - |
| 38   | HSOn(5)| Ground | Lane 5 transmit data, + and - |
| 39   | Ground | HSIp(5)| Lane 5 receive data, + and - |
| 40   | Ground | HSIn(5)| Lane 5 receive data, + and - |
| 41   | HSOp(6)| Ground | Lane 6 transmit data, + and - |
| 42   | HSOn(6)| Ground | Lane 6 transmit data, + and - |
| 43   | Ground | HSIp(6)| Lane 6 receive data, + and - |
| 44   | Ground | HSIn(6)| Lane 6 receive data, + and - |
| 45   | HSOp(7)| Ground | Lane 7 transmit data, + and - |
| 46   | HSOn(7)| Ground | Lane 7 transmit data, + and - |
| 47   | Ground | HSIp(7)| Lane 7 receive data, + and - |
| 48   | PRSNT2#| HSIn(7)| Lane 7 receive data, + and - |
| 49   | Ground | Ground | PCI Express x8 cards end at pin 49 |
| 50   | HSOp(8)|Reserved| Lane 8 transmit data, + and - |
| 51   | HSOn(8)| Ground | Lane 8 transmit data, + and - |
| 52   | Ground | HSIp(8)| Lane 8 receive data, + and - |
| 53   | Ground | HSIn(8)| Lane 8 receive data, + and - |
| 54   | HSOp(9)| Ground | Lane 9 transmit data, + and - |
| 55   | HSOn(9)| Ground | Lane 9 transmit data, + and - |
| 56   | Ground | HSIp(9)| Lane 9 receive data, + and - |
| 57   | Ground | HSIn(9)| Lane 9 receive data, + and - |
| 58   |HSOp(10)| Ground | Lane 10 transmit data, + and - |
| 59   |HSOn(10)| Ground | Lane 10 transmit data, + and - |
| 60   | Ground |HSIp(10)| Lane 10 receive data, + and - |
| 61   | Ground |HSIn(10)| Lane 10 receive data, + and - |
| 62   |HSOp(11)| Ground | Lane 11 transmit data, + and - |
| 63   |HSOn(11)| Ground | Lane 11 transmit data, + and - |
| 64   | Ground |HSIp(11)| Lane 11 receive data, + and - |
| 65   | Ground |HSIn(11)| Lane 11 receive data, + and - |
| 66   |HSOp(12)| Ground | Lane 12 transmit data, + and - |
| 67   |HSOn(12)| Ground | Lane 12 transmit data, + and - |
| 68   | Ground |HSIp(12)| Lane 12 receive data, + and - |
| 69   | Ground |HSIn(12)| Lane 12 receive data, + and - |
| 70   |HSOp(13)| Ground | Lane 13 transmit data, + and - |
| 71   |HSOn(13)| Ground | Lane 13 transmit data, + and - |
| 72   | Ground |HSIp(13)| Lane 13 receive data, + and - |
| 73   | Ground |HSIn(13)| Lane 13 receive data, + and - |
| 74   |HSOp(14)| Ground | Lane 14 transmit data, + and - |
| 75   |HSOn(14)| Ground | Lane 14 transmit data, + and - |
| 76   | Ground |HSIp(14)| Lane 14 receive data, + and - |
| 77   | Ground |HSIn(14)| Lane 14 receive data, + and - |
| 78   |HSOp(15)| Ground | Lane 15 transmit data, + and - |
| 79   |HSOn(15)| Ground | Lane 15 transmit data, + and - |
| 80   | Ground |HSIp(15)| Lane 15 receive data, + and - |
| 81   |PRSNT2# |HSIn(15)| Lane 15 receive data, + and - |
| 82   |Reserved| Ground | |
