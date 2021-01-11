## C code for soil moisture sensor YL-69 with raspberryPi"

### 1-Connect:
 
#### BCM GPIO 18 to D0 
#### 5V	    to Vcc 
#### 0v	    to GND

### 2-Install wiringPi library on Raspbian:

#### http://wiringpi.com/download-and-install/

### 3-Copy the code to the file soilhum.c

### 4-Compile

#### gcc -Wall -o soilhum soilhum.c -lwiringPi 
#### sudo ./soilhum
	
