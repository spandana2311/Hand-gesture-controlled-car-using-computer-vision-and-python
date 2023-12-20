import cv2
import serial
from cvzone.HandTrackingModule import HandDetector
cap=cv2.VideoCapture(0)
detector=HandDetector (detectionCon=0.5 , maxHands=1)
bt=serial.Serial('COM3',9600)
while True:
    ret , frame=cap.read()
    frame=cv2.flip(frame, 1 ) #flips the cam frames in my stytem cam
    hands , frame=detector.findHands(frame)
    if not hands:
        print("nothing")
    else:
        hands1=hands[0]
        fingers=detector.fingersUp(hands1)
        print(fingers)
        count=fingers.count(1)
        print(count)
        string='X{0}' .format(count)
        bt.write(string.encode("utf-8"))
    cv2. imshow( " FRAME" , frame)
    if cv2.waitKey(1) & 0xFF == 27:
        break
cap.release()
cv2.destroyAllWindows()
