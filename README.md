# ESP32 accelerometer

## Installing ESP-IDF

    git clone https://github.com/espressif/esp-idf.git
    cd esp-idf
    ./install.sh

The following environment variables needs to be set:

 - `IDF_PATH` - path to the esp-idf directory.
 - `IDF_TARGET` - ESP32 target to build (`esp32c3`).
 - `ESPPORT` - COM port of the ESP32.

IDF_PATH can be found by running `esp-idf/export.sh`. This script will also
output paths added to the `PATH` variable, which needs to be updated
accordingly.

## Building the project

Either run `idf.py flash` or **build** the `flash` configuration from an IDE.
This will build and flash the CMake project to the ESP32. Use the `monitor`
configuration to monitor the output.