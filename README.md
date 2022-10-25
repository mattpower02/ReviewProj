# Student Analyzer 3000

Repo address:
https://github.com/mattpower02/ReviewProj.git

Group Member Names: Andrew Campbell and Matthew Power

Summary:
When planning this project, we wanted to create a program that would not only help students visualize what their grade is, but ask input from the user and see if the student is doing as well as they would hope. We also decided to implement a feature in our program that will tell a student what they should do depending on the grades in their class. For example, if they have low grades in assignments, we recommend they go to office hours to seek help from TAs and master the content for that class. Another exaemple, if the student is struggling on tests, we recommend they study more before the tests and possibly join a study group. 

We recommend the Student Analyzer 3000 to students AFTER they have completed a course, but are unsure about their final grade / grade breakdown. 




Pseudocode:

Create a class with final grade of each section and the weight of each section
Recognize this program will take in a lot of input
Get name of student
Create loop for number of assignments they have, asking for input for grade on each one so far
  Push these values into a vector
  Calculate the average of all the elements within the vector
  Print the average for that section to the student
Repeat for any other section that this is applicable to.
Get weight of each section (can do this earlier)
Calculate student's average for the class
  Recognizing we need each section average and weight:
  Multiply the average of each section by weight percentage
  Add these all together to get final grade
Analyze the average for each section
  Print out the lowest section
    Talk about improvement
    Study tips
    
    
    
    
    
    
Features of the Student Analyzer 3000:

We focused on improvement in this project. Knowing your grade is good, but that won't help if you want to improve your grade. Our program will tell you exactly how you can improve and in what sections you should improve. 
The Student Analyzer 3000 (SA3K) should be used after completing a course. This is because our intense algorithm will analyze each section of the class and will breakdown everything the student needs to know:

-what section was my worst?
-where should I improve?
-how can I improve?
-who can I go to for improvement?
-should I study more?
-etc...
