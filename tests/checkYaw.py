from djitellopy import Tello
import time


'''This script is used to check the connection to the Tello drone and to test the velocity and rc control of the drone in one axis'''
drone = Tello()
drone.connect()
#wait until is connected
drone.takeoff() #takeoff 


vx = 0
vz = 0
vy = 0
Yv = 50



drone.send_rc_control(-vx, vz, vy, Yv)

time.sleep(50)
drone.land()
