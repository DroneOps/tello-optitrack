from djitellopy import Tello


tello = Tello()
tello.connect()

# Check battery level
battery_level = tello.get_battery()
print(f"Battery level: {battery_level}%")

tello.end()

