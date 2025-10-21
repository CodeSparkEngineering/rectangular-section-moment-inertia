📘 Calculation of the Moment of Inertia for a Rectangular Section
🧩 Project Description

This program was developed to calculate fundamental geometric properties of a beam with a rectangular cross-section, commonly used in Structural and Mechanical Engineering.
The application reads the beam’s dimensions (width and height), computes the cross-sectional area and the moment of inertia about the neutral axis, and displays the results in a clear and interpretable way.

⚙️ Features

Reads the width (b) and height (h) of the beam (in centimeters).

Calculates the cross-sectional area:

𝐴
=
𝑏
×
ℎ
A=b×h

Calculates the moment of inertia about the neutral axis:

𝐼
=
𝑏
×
ℎ
3
12
I=
12
b×h
3
	​


Checks whether the area is greater than or equal to 100 cm², indicating if the beam can support a “basic load.”

Displays the calculated results neatly formatted.

🧮 Example Output
Enter the width (b) in cm: 10
Enter the height (h) in cm: 15

Cross-sectional Area: 150.00 cm²
Moment of Inertia: 28125.00 cm⁴
The beam is suitable to support the basic load.

💻 Technologies Used

C Programming Language

GCC Compiler (or any standard C-compatible compiler)

🎯 Educational Objective

This project reinforces key engineering and programming concepts, including:

Geometric properties of cross-sections;

Practical application of strength of materials formulas;

Structured programming in C (input, processing, and output).

🏗️ Author

Developed by Codespark Engineering as a practical exercise in Structural Engineering and C Programming.
