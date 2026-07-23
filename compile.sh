#!/bin/bash

# Exit immediately if any command fails
set -e

# Output executable name
APP_NAME="myapp"

echo "Compiling $APP_NAME..."

# Compile using g++ with pkg-config flags for GTK3 and WebKitGTK on Arch
g++ main.cpp -o "$APP_NAME" $(pkg-config --cflags --libs gtk+-3.0 webkit2gtk-4.1) -std=c++17

echo "Compilation successful! Run it with: ./$APP_NAME":
