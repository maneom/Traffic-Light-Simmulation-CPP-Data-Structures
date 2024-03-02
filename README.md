## Traffic Light Simmulation - CPP (Data-Structures)

This C++ program simulates a traffic light system using data structures and algorithms. Here's a summary of its key components and functionality:

__Class Definition (Cqueue)__:
Defines a circular queue to store the status of traffic lights.
Initializes the queue with three elements representing different traffic light colors: red, yellow, and green.

__Member Function enque()__:
Implements the enqueue operation in the circular queue.
Updates the front pointer to the next position in the circular queue.
Returns the current status of the traffic light.

__Function design(int n)__:
Displays the graphical representation of each traffic light color based on the input parameter n.
Uses ASCII art to draw the traffic light shapes and colors.

__Function display()__:
Creates an instance of the Cqueue class.
Continuously loops to simulate the traffic light system.
Calls enque() to get the status of the next traffic light.
Calls design() to display the graphical representation of each traffic light.
Provides visual feedback to the user indicating whether to stop, wait, or go based on the current traffic light status.
Allows the user to exit the simulation by pressing the 'Esc' key.

__Main Function__:
Calls the display() function to start the traffic light simulation.

__Overall, this program provides a simple yet effective simulation of a traffic light system using circular queues and ASCII art for graphical representation. It allows users to visualize the behavior of traffic lights and understand traffic regulations.__
