# epever-tracer

Enables communication with Epever Tracer charge controller via Modbus slaves over RS485. Requires an RS485 transceiver.

# Wiring

The connections should be made like below:

![Wiring](https://github.com/genilto/epever-tracer/raw/main/assets/Imagem_Esquematica.jpg "Wiring")

It's important to disconnect tx and rx pins from nodemcu before upload the firmware to it.

It's a good idea implement OTA updates for the next updates of the firmware, so you don't need to keep disconnecting all the times you want to upload a new firmware.

# Tracer Manual

Below is the Manual of Epever Tracer Modbus protocol.

[Click to open the manual](https://github.com/genilto/epever-tracer/blob/main/assets/ControllerProtocolV2.3.pdf)

# Special thank you

I have to thank pfeerick and his project tracerWebserver that help me a lot to create my own project and library.

https://github.com/pfeerick/tracerWebserver


Below other projects and posts I found. 
Thank each of you guys that help me a lot.

https://awesomeopensource.com/project/jaminNZx/Tracer-RS485-Modbus-Blynk

https://github.com/jaminNZx/Tracer-RS485-Modbus-Blynk

https://www.instructables.com/Wireless-Solar-Charge-Controller-Monitor-RS485-to-/

https://www.eevblog.com/forum/projects/nodemcu-esp8266-rs485-epever-solar-monitor-diy/
