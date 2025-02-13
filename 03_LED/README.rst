Section 3: LED
##############

The blink sample has been copied directly `from the Zephyr tree`_. It
blinks an LED at 1 Hz.

Using this sample you will learn:

* Where to find board-level Devicetree definitions in the Zephyr tree
* How to create a Devicetree overlay file to add a board to an application
* C syntax for accessing Devicetree nodes

Hardware
********

The committed code should build for all Zephyr-supported boards that have
defined an ``led0`` alias in their Devicetree configuration.

Build Instructions
******************

Prerequisites
=============

Follow the README in the root of this repository to install a
virtual environment and use ``west init``/``west update`` to clone all dependencies.
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

Application Behavior
********************

When the app begins running it blink the onboard LED at 1 Hz.

.. _from the Zephyr tree: https://github.com/zephyrproject-rtos/zephyr/tree/main/samples/basic/blinky
