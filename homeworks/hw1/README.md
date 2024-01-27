# Homework 1

## Submission Instructions
Submit **only** the solution files - files where you will enter your solutions - via ICON. For this assignment, 
these are:
- `solutions.csv` from this file after you have completed it
- `prob3.cpp`, `prob5.cpp`, `prob6.cpp`, `prob7.cpp`, `prob8.cpp` created by you

For now you are using Git only 
to *pull* from the repository that I'm maintaining. You're not *pushing* changes/solutions to it. Instead, you will submit your solutions in ICON.

**Don't** submit the *specification files* - any files that are used to specify the problem to you. For this assignment, these are all the files with the `.md` 
extension and `sample.csv`. Don't submit these.

`solutions.csv` is a CSV (comma-separated values) file. A CSV is a common way to 
define rows and columns of data. Think of an Excel spreadsheet: because data is organized into rows and columns, 
it is easy to locate data using their row number and column number. In a CSV, each line represents a row (so rows 
are separated by new lines); and  within a row, column data is separated using commas. So if I wanted to represent
the integers 1 to 12, sequentially (left to right, then top to bottom) among 3 columns `c1`, `c2`, and `c3`, my 
file would look like this:
```
c1, c2, c3
1, 2, 3
4, 5, 6
7, 8, 9
10, 11, 12
```
This is the raw data in a CSV (presented in [sample.csv](./sample.csv)), but there are editors that can give 
you a more convenient view of this data. Most Linux distros have an open source version of Microsoft Excel 
called LibreOffice Calc. You can open this file in this editor using the GUI, by right clicking on `sample.csv` 
and clicking `Open With LibreOffice Calc`. Calc will give you the option of specifying the column separator. Comma is 
the default separator, so leave this unchanged to see the file in an Excel spreadsheet-like view. You can also do this
within the VSCode IDE by right clicking on the file in the file navigation bar on the left and clicking
`Open Preview`.

**The following instruction is very important to follow throughout the semester for this class, and through 
your programming career.**
Your solutions must provide **only** what is asked for, nothing less (this isn't a new idea, if your answer contains 
less than what is asked for then you lose points), but also *nothing more* - I want to stress this, you could lose 
points for saying more than what is asked for, including leading or trailing whitespaces. This is because we often 
use automated scripts to grade your solutions, and we have to tell these scripts exactly what to expect from your
solutions. This is analogous to programming in the real world where programs will generate data that are used by 
other programs that don't think like humans, they need to understand the precise form of the data, and can't 
account for even small variations such as unexcepted white-spaces.
Now, sometimes what is asked for is not clear. In this case, your problem is underspecified, so it is not clear 
what to do. In such cases, (and even in cases where the problem is correctly specified but unclear to you) 
you must ask clarifying questions. Please do this on Slack in the channel corresponding to the assignment (#hw1), or during office hours.

For this assignment, add your text solutions when specified to the second column 
(titled `Solution`) of [solutions.csv](solutions.csv). For each row (except the header), the cell in the 
first column specifies the problem number whose solution must be entered into the second column of the 
corresponding row.

For the other problems that ask you to submit C++ programs, submit the `.cpp` file **only**. You
will have to compile them to build executables so you can test your programs, but **don't** submit these executables.

## Problem 1 (20 points)

See [Problem1.md](./Problem1.md).

## Git/Github

Git is a **distributed Version Control System (VCS)**, which means it is a useful tool for easily tracking changes to your code, collaborating, and sharing. With Git you can track the changes you make to your project so you always have a record of what you’ve worked on and can easily revert back to an older version if need be. It also makes working with others easier—groups of people can work together on the same project and merge their changes into one final source!

GitHub is a way to use the same power of Git all online with an easy-to-use interface. It’s used across the software world and beyond to collaborate and maintain the history of projects.

We will store most of our class material - assignments, solutions, etc. - on Git. We will use the web interface of Github to view
this content, and Git through the command-line interface to manage it.

### Understanding the GitHub flow 

The GitHub flow is a lightweight workflow that allows you to experiment and collaborate on your projects easily, without the risk of losing your previous work.

#### :octocat: Repositories

A repository or *repo* is where your project work happens--think of it as your project folder. It contains all of your project’s files and revision history.  You can work within a repository alone or invite others to collaborate with you on those files.

Your assignments with instructions and any starter code will reside in the class within a directory Github repo.

Repositories also contain **README**s. You can add a README file to your repository to tell other people why your project is useful, what they can do with your project, and how they can use it. We are using this README to specify the homework 1 assignment.

Within the repositories shared with you, and also within each assignment directory within the repo, look at the 
README file to understand how the repo works/how to understand and submit the assignment.

To learn more about repositories read ["Creating, Cloning, and Archiving Repositories](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/about-repositories) and ["About README's"](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/about-readmes). 


#### :octocat: Cloning 

When a repository is created with GitHub, it’s stored remotely in the cloud. You can clone a repository to create a local copy on your computer and then use Git to sync the two. This makes it easier to fix issues, add or remove files, and push larger commits. You can also use the editing tool of your choice as opposed to the GitHub UI. We will use Git through the Linux command line to stay updated with the online repository, and the Visual Studio Code (VSCode) IDE to manage the repository
locally on our Linux systems. Cloning a repository also pulls down all the repository data that GitHub has at that point in time, including all versions of every file and folder for the project! This can be helpful if you experiment with your project and then realize you liked a previous version more. 

You will clone the class repository locally into your computer to work on it, and pull newer versions as I push them 
(for example, after I have pushed an assignment specification).

To learn more about cloning, read ["Cloning a Repository"](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/cloning-a-repository). 


#### Using markdown on GitHub 

You might have noticed already, but you can add some fun styling to your issues, pull requests, and files. ["Markdown"](https://guides.github.com/features/mastering-markdown/) is an easy way to style your issues, pull requests, and files with some simple syntax. This can be helpful to organize your information and make it easier for others to read. You can also drop in gifs and images to help convey your point!

This file is written in markdown, and markdown files usually take the file extension `.md`.

To learn more about using GitHub’s flavor of markdown, read 
["Basic Writing and Formatting Syntax"](https://docs.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax). 

## Problem 2 (15 points)
See [Problem2.md](./Problem2.md).

## Problem 3 (10 points)
See [Problem3.md](./Problem3.md).

## Problem 4 (10 points)
See [Problem4.md](./Problem4.md).

## Problem 5 (20 points)
See [Problem5.md](./Problem5.md).

## Problem 6 (25 points)
See [Problem6.md](./Problem6.md).

## Problem 7 (70 points)
See [Problem7.md](./Problem7.md).

## Problem 8 (30 points)
See [Problem8.md](./Problem8.md).

