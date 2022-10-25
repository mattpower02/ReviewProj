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

Input of the SA3K:
When using SA3K, you should expect to have all of your grades in front of you for that certain class. You should also be familiar with the weights for each section so that we can easily calculate your final grade and give you a thorough explanation and breakdown of where you can improve and what you did well!

Output of the SA3K:
We don't want to be like others, only telling you your final grade and leaving you in the dust. We care about helping you improve in class and we will break down everything you need to know. So, after our program walks you through entering all of your class information (grades, sections, weights, etc), we display a summary to you.
This summary is somewhat long, but we want to supply you with enough information so you know how to improve for the next class!
First, we tell you your final grade and the letter grade equivalent to that. Then, we dive deeper, telling you your worst section and the average of that. We discuss ideas to help you improve in that category for next semester, whether it be going to study hours, forming a study group, or simply spending more time learning the content.
Hard work does not go unnoticed. We also tell you the section you did the best in, and how you can continue to excel in that category so you can pass with flying colors next semester. 

Why was the development like this important to the SA3K group:
We decided to design our program like this for a number of reasons. The primary reason is: calculating your grade only tells you a small piece of what you actually need to know. Many times when students are struggling with classes, they are told they need to get better grades, but no one tells them how and what things they should focus on.
That's where development started for the SA3K. 
Development wasn't the easiest for our group but we were able to produce a flawless analyzer.
We started by discussing our reason for completing this project, and who it was for. We decided that we wanted to do deeper than just calculating a final grade. After discussing what we were going to do, we had to discuss how. We used pair programming for a majority of our code, bouncing ideas off one another and finding efficient ways to solve problems. Also, having multiple people really helped when it came time to suggesting improvements to the student.
We had tons of information we could share with the student depending on what category they excelled in and struggled in. We hope the SA3K can help you with becoming a better student!

Instructions:
We made it easy to use our SA3K! You should be sent the executable file (if you were not, see below).
-Place the file on your desktop
-IF you were not sent just the executable, drag the three files to your desktop
-Open up 'Terminal' on your computer, by either searching for it or navigating to it
-enter the following commands:
-'cd desktop'
-IF you were not sent just the executable, 'g++ main.cpp review.cpp -o SA3K'
-'./SA3K'
-From that point, you will be prompted with instructions by the program, such as entering how many assignments you completed, the grades for each assignment, the weight of each section, etc.
-When you have finished inputting all of your grades, scroll through our summary. It will provide you information on how to improve as a student and what you should focus on!

