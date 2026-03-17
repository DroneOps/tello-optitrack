#!/bin/bash

#Script to connect to the Tello drone's WiFi network.
IFACE="wlan0"

# name of the WiFi network to connect to, in this case the default SSID of the Tello drone, but it can be different
# if the drone has been configured with a different SSID. Make sure to change it if your drone has a different SSID.
SSID="TELLO-374539"

# leave empty if the network does not have a password
PASSWORD=""

# Check if already connected to the desired network
CURRENT=$(nmcli -t -f active,ssid dev wifi | grep '^yes' | cut -d: -f2)

if [ "$CURRENT" == "$SSID" ]; then
    echo "Connected to $SSID"
    exit 0
fi

# if not connected, try to connect to the desired network
if [ -n "$PASSWORD" ]; then
    echo " Connecting to $SSID with password..."
    nmcli dev wifi connect "$SSID" password "$PASSWORD"
else
    echo " Connecting to $SSID (no password)..."
    nmcli dev wifi connect "$SSID"
fi

# Check if the connection was successful
if [ $? -eq 0 ]; then
    echo " Connected to $SSID"
else
    echo " Error connecting to $SSID"
    exit 1
fi
