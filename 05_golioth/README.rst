Section 5: Add Golioth to Your Project
######################################

This sample demonstrates how to add Golioth to an existing project. It assumes
that you already have an internet connection set up, and thus this sample
includes code necessary for the nRF7002dk or nRF9160dk to establish a network
connection during powerup. It includes the timer and thread based LED blinking
code that you implemented in the previous sample.

Using this sample you will learn:

* How to build the Golioth Zephyr SDK into your project
* How to add the Golioth Client to your C files
* How to make LightDB State and LightDB Stream API calls so send data to Golioth

Hardware
********

This code will build and run on the ``nRF7002DK`` and ``nRF9160dk`` boards.

Build Instructions
******************

Prerequisites
=============

Follow the README in the root of this repository to install a virtual
environment and use ``west init``/``west update`` to clone all dependencies.
Remember to restart your virtual environment when beginning a new terminal
session.


Build project
=============

From the root directory of this repository, build using the following command:

.. code-block:: bash

   $ # Building for nRF7002dk
   $ (.venv) west build -b nrf7002dk/nrf5340/cpuapp 03_LED

   $ # Building for nRF9160dk
   $ (.venv) west build -b nrf9160dk/nrf9160/ns 03_LED

Flash project
=============

Connect your computer to the board via USB. (On the nRF7002dk, do not use the
USB port labelled `nRF USB`.) Run the following command:

.. code-block:: bash

   $ (.venv) west flash

Add credentials
===============

Use a serial terminal program to connect to the device using 115200 8N1 as the
settings.

nRF7002dk
---------

* Use the **highest** numbered port
* Use the following syntax to store your WiFi and Golioth credentials on the
  device:

.. code-block:: bash

   uart:~$ settings set wifi/ssid <my-wifi-ap-ssid>
   uart:~$ settings set wifi/psk <my-wifi-ap-password>
   uart:~$ settings set golioth/psk-id <my-psk-id@my-project>
   uart:~$ settings set golioth/psk <my-psk>
   uart:~$ kernel reboot cold

nRF9160dk
---------

* Use the **lowest** numbered port
* Use the following syntax to store your Golioth credentials on the device:

.. code-block:: bash

   uart:~$ settings set golioth/psk-id <my-psk-id@my-project>
   uart:~$ settings set golioth/psk <my-psk>
   uart:~$ kernel reboot cold

Application Behavior
********************

When the app begins running, LED1 and LED2 will begin blinking at different
rates. A network connection will be automatically established.

