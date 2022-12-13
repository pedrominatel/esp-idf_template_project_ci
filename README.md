# ESP-IDF Project Template with CI

This is a template project to be used as a reference for ESP-IDF projects with GitHub CI.

![GitHub Workflow Status](https://github.com/pedrominatel/esp-idf_template_project_ci/actions/workflows/ci.yml/badge.svg)

## About

Template project for ESP-IDF with GitHub CI

## Get ESP-IDF

Get the ESP-IDF and install it.

See the [ESP-IDF Getting Started Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html#get-started).

## Build the Project

Go to the project directory and build.

Set the IDF_TARGET (For ESP32-S3 target, IDF version `release/v4.4` is needed)

```
idf.py set-target esp32s3
```

To build this, run:

```
idf.py build
```

### Load and Run

To flash (replace `/dev/ttyUSB0` with the device serial port):
```
idf.py --port /dev/ttyUSB0 flash
```

Monitor the serial output:
```
idf.py --port /dev/ttyUSB0 monitor
```

Use `Ctrl+]` to exit.

The previous two commands can be combined:
```
idf.py --port /dev/ttyUSB0 flash monitor
```

## License

These examples are covered under Apache License Version 2.0.