import subprocess

# Connect to the Tello WiFi network using the connect_wifi.sh script
subprocess.run("./connect_wifi.sh", check=True)

# Excute the checkBattery.py script to check the battery level of the Tello drone
subprocess.run(["python3", "checkBattery.py"])
