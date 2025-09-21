# QMK userspace

This is my QMK userpace, which contains custom keymaps and configurations for my keyboards. Currently I have a keymap configuration for the Sofle V2 keyboard and the Corne v3 keyboard in the 6 columns version.

Both are in the `keyboards/` directory and the keymap name is `brunobmello25`.

# How to flash

## Sofle V2

To flash the firmware, run the following command:

```bash
# first, compile the firmware
qmk compile -kb sofle -km brunobmello25

# then, flash it to the keyboard
qmk flash -kb sofle -km brunobmello25
```

## Corne v3 (6 columns)

My corne keyboard uses RP2040 microcontrollers, so we need to use the qmk conversion feature:

```bash
qmk compile -kb crkbd/rev1 -km brunobmello25 -c -e CONVERT_TO=rp2040_ce
```

Then, we flash it a little bit differnetly. instead of running a flash command, press the reset button. you will see that the arduino entered bootloader mode and a new drive will appear in your system.

To flash, simply copy the generated `.uf2` file to the new drive. Once the copy is done, the keyboard will reboot and start using the new firmware. the drive will disappear automatically.

# Old readme
