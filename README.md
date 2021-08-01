# ezDisplay powered by VK Electronics

![ezDisplay](/images/ezDisplay.png)

![hardware](/images/hardwareoverview.png)

![schematic](/images/schematics.PNG)

![layout top](/images/layout_top.PNG)

![layout bottom](/images/layout_bottom.PNG)

_**Repo structure:**_

 example <br>
 ├── ezDisplay_Badge (Arduino sample code)<br>
 └── bitmap_samples (BMP format images used for sample)

**Steps and Tools used:**
1. Search for the GIF you want to display: https://icons8.com/free-animated-icons/charging-battery
   
   ![battery](https://github.com/VincentK16/ezDisplay/blob/main/images/battery.gif)
2. Convert GIF to frames of images: https://ezgif.com/split
   
   * Split the downloaded GIF into the respective frames of images:
   ![split](images/split-images.png)
   
   * You can customize the animation using the GIF Maker:
   ![gifmaker](images/gif-maker.png)
   
3. Resize the frames of images to size of OLED (128 x 64 pixels): https://ezgif.com/resize
   ![resize](images/resize.png)

4. Convert image extesion to BMP: Paint software 
   * Load the GIF image on **Paint** software<br>
   ![extension](images/paint_gif.png)
   
   * Choose the file extension as Monochrome BMP: <br>
     ![extension_bmp](images/paint_bmp.png)

5. Convert the images into bytes arrays for Arduino code use: https://javl.github.io/image2cpp/ 
   * Load the converted BMP image and change the configurations (as your own preference - trials and errors)
     ![bmp_1](images/image2cpp_1.png)
     
   * Generate the byte arrays code. One image correspond to one **Identifier/Prefix:**
     ![bmp_2](images/image2cpp_2.png)
     
   * Paste the generate byte arrays code into the Arduino code (Info1.h or Info2.h or Info3.h .....) in *sample* folder
     ![bytes](images/info1.png)
     
   * Change the sequence and name of the *drawImage* function on Arduino main code
     ![bytes](images/arduino_2.png)
     
![congrats](images/congrats.png)

*Demo*:

https://user-images.githubusercontent.com/3338753/126266203-f6aac0b2-3e78-4521-9fda-b27abc24194b.mp4

Product Review by Johnson Lam, Founder of KakiDIY

[![Alt text](https://img.youtube.com/vi/zmygiUdSmgM/0.jpg)](https://www.youtube.com/watch?v=zmygiUdSmgM)


