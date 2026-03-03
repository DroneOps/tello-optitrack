from djitellopy import Tello
import time

# This script is used to check the connection to the Tello drone and to test the control of the drone in one axis 
# while recording the height of the drone in a text file for later analysis.

'''tello = Tello() creates an instance of the Tello class, which is used to interact with the drone.'''
tello = Tello()
#connect to the Tello drone
tello.connect()

# Check battery level
battery_level = tello.get_battery()
print(f"Nivel de batería: {battery_level}%")

# Take off
tello.takeoff()
time.sleep(2)  # wait for the drone to stabilize after takeoff

# Function to move the drone and record height
def mover_dron(vx=0, vy=0, vz=0, yaw=0, duracion=3):
    """
    vx: velocidad en X
    vy: velocidad en Y
    vz: velocidad en Z
    yaw: rotación
    duracion: tiempo a mantener el control (segundos)
    """
    inicio = time.time()
    while time.time() - inicio < duracion:
        tello.send_rc_control(vx, vy, vz, yaw)
        altura = tello.get_height()
        print(f"Altura: {altura} cm")
        with open("height.txt", "a") as file:  # append mode to save the height data
            file.write(f"{altura}\n")
        time.sleep(0.1)  # small delay to avoid overwhelming the drone with commands and to have a reasonable sampling rate for height data

# Clean the height.txt file before starting the test
open("height.txt", "w").close()


# 3 seconds of movement in the X axis (rising at 50 cm/s)
mover_dron(vx=50, duracion=3)


tello.send_rc_control(0, 0, 0, 0)
time.sleep(1)

# Landing
tello.land()
tello.end()
print("Sequence completed and heights saved in height.txt")
