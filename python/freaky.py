import pyautogui as pg
import time

print("program will rn in 5 sec")
time.sleep(5)

for i in range(1000):
    pg.write("Where ?..")
    time.sleep(0.5)
    pg.press("Enter")
