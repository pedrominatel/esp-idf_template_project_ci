# ESP-IDF Project Template with CI

This is a template project to be used as a reference for ESP-IDF projects with GitHub CI.

![GitHub Workflow Status](https://github.com/pedrominatel/esp-idf_template_project_ci/actions/workflows/ci.yml/badge.svg)

## About

Template project for ESP-IDF with GitHub CI

## Important Files in this Project

### CI Files

The CI files describe the workflow to be executed on GitHub Actions.

* workflows/build_workflow.yml
* workflows/ci.yml

### Project Files

Those files define specific SDK configurations depending on the selected target or general configuration for all the targets.

Common for all the targets:

* sdkconfig.defaults

Target specific:

* sdkconfig.defaults.esp32
* sdkconfig.defaults.esp32c3
* sdkconfig.defaults.esp32s2
* sdkconfig.defaults.esp32s3

The `idf_component.yml` file adds the components from [ESP Registry](https://components.espressif.com/).

* main/idf_component.yml

The `Kconfig.projbuild` define the `menuconfig` entries.

* main/Kconfig.projbuild

To edit the configuration by using the graphical menu, you can use `idf.py menuconfig` command.

## Get ESP-IDF

Get the ESP-IDF and install it.

See the [ESP-IDF Getting Started Guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html#get-started).

## Build the Project

Go to the project directory and build.

Set the IDF_TARGET (For ESP32-S3 target, IDF version `release/v5.0` is needed)

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

### Creating a New Project from Scratch

To create a new blank project, you can use `idf.py` to generate all the necessary files.

```
idf.py create-project <my_project_name>
```

## License

This project template is covered under Apache License Version 2.0.
