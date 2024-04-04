# onlyoffice-documentbuilder-cxx-api-demo
OnlyOffice DocumentBuilder C++ API Demo Project

# Prerequirements

## Common

1. Download https://www.onlyoffice.com/download-builder.aspx?utm_source=api
2. Intall OnlyOffice DocumentBuilder C++ SDK

## Debian/Ubuntu:

```
suto apt-get install build-essential gdb cmake ninja-build
sudo apt-get install libstdc++6 libcurl3-gnutls libc6 libxml2 libcurl3 fonts-dejavu fonts-opensymbol
sudo apt-get install fonts-liberation ttf-mscorefonts-installer fonts-crosextra-carlito

```

## RedHat/CentOS:

```
suto yum install gcc-c++ gdb cmake ninja-build
sudo yum install glibc libcurl libxml2 dejavu-lgc-sans-fonts dejavu-lgc-sans-mono-fonts dejavu-lgc-serif-fonts dejavu-sans-fonts dejavu-sans-mono-fonts dejavu-serif-fonts libreoffice-opensymbol-fonts
```

# Build

```
mkdir build
cd build
cmake ..
cmake --build .
```
