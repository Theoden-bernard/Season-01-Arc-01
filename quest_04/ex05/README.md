# DESCRIPTION

You have been recently been hired by SpacePro, a new rocket manufacturer, and have been tasked with designing a simulator for their spaceships. This simulator creates a virtual “space” and keeps track of the basic movements and direction of a given ship. Your job is to keep track of where the ship is and it’s orientation relative to its starting point.

# INSTRUCTIONS

Your ship simulator must take in a string of letters that represent a planned flight path for a given rocket ship.

In a ship’s flight path there are only 3 valid options for movement; R for turning right, L for turning left and A for advancing.

If, for example, you receive “RRALAA” as your flight path, you should interpret it as the following: Turn right, turn right, advance, turn left, advance, advance Once given this initial flight path, your program must return the x,y coordinates of a ship’s final destination as well as it’s orientation relative to the starting point.

Orientation is represented as left, right, up or down.

Space is infinite, so the x,y coordinates you return could be placed on a seemingly infinite grid and can be negative or positive values.

So let's say an upward-facing rocket ship leaves its starting point of 0,0 and is given the flight path of “RRALAA”, its final location will be 2,-1 and it will be facing right.

# YOUR JOB

You must create a function that takes in a flight path of a rocket ship as a string of letters and returns the following format: "{x: X, y: Y, direction: 'DIRECTION'}" X,Y represent the ending coordinates of your ship and direction represents its final direction.

# NOTES

Function myspaceship returns a _STRING.

We are using Computer Graphics Coordinate System

<img="https://storage.googleapis.com/qwasar-public/track-rust/computer_coordinates.png">

All spaceships will start at 0,0 and will face up Moving left/right will influence X and moving up/down will influence Y

## FUNCTION PROTOTYPE (C)

```c
char* my_spaceship(char* param_1)
{

}
```

## Example 00
```bash
Input: "RAALALL"
Output: 
Return Value: "{x: 2, y: -1, direction: 'down'}"
```
## Example 01
```bash
Input: "AAAA"
Output: 
Return Value: "{x: 0, y: -4, direction: 'up'}"
```
## Example 02
```bash
Input: ""
Output: 
Return Value: "{x: 0, y: 0, direction: 'up'}"
```
## Example 03
```bash
Input: "RAARA"
Output: 
Return Value: "{x: 2, y: 1, direction: 'down'}"
```