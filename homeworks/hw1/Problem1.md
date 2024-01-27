# Problem 1
The objectives of this problem are:
1. Log in to the Linux virtual machine via FastX.
2. Navigate the Linux directory space using the command line and check the versions of the tools we will need for the rest of the assignment.

**Please note** that you will need to record some outputs in a file called `solutions.csv` from the commands you run in this problem. However, if you don't have the class repository upto date with the remote repository, you won't be able to do this until you finish the tasks in [Problem 2](./Problem2.md). It still helps to go through the tasks in this problem before you do that, to get acquainted with the Linux environment.

## Linux via FastX
1. Install and run the FastX 3 desktop client from [here](https://www.starnet.com/download/fastx-client) (or use the web interface through [this](https://fastx.divms.uiowa.edu) link).
2. Create a new https connection by clicking `+`, selecting https instead of ssh on the drop-down menu, typing the following details, and clicking `Ok`:
- fastx.divms.uiowa.edu for Host
- your hawkID for User
- 3443 for Port
- uncheck "Ignore SSL errors" and "Force SSH authentication"
3. Double click the connection you created and enter your password
4. Create a new session by clicking `+` and selecting Mate (enter password if prompted)
5. Click the toggle fullscreen mode button ​(button with four arrows pointing diagonally outwards from the center). Once 
you're done with your work, please log out (System -> Log Out) and close the session.
6. Open up a command line terminal either through `Applications -> MATE Terminal` (top left of the screen), or by using 
the shortcut icon in the navigation bar on top. The terminal is always in some directory in your Linux directory structure. This is called the *working directory* and is printed before the command prompt (the `%` symbol). You can also
check which directory you are in using `pwd` (for "print working directory"), and you can change to a particular directory 
using `cd`. When you open the terminal, you should be in your home directory (the shortcut for this is `~` which is 
what you might see on your command line) within which your Desktop is located. 
Move to your Desktop by running:
    ```
    cd Desktop
    ```
7. Now create a directory called `test`:
    ```
    mkdir test
    ```
8. Move into `test` and check the current working directory by running the following commands and 
record the output of the latter in the solution column of row `1a` in [solutions.csv](./solutions.csv).
    ```
    cd test
    pwd
    ```
    Note that in the codeblock above, each line is a single command that you need to run, so type the command and 
    hit Enter. Record the output of the second command only (the first one wouldn't have a text output anyway).
9. Now remove `test`. For this, we have to move out of `test` first using `cd` and the shortcut `..` for the *parent directory*,
the directory above the working directory in the file structure (or the one that contains the working directory):
    ```
    cd ..
    rm -r test
    ```
    The `rm` command is used to remove files, the `-r` *option* (r stands for recursive here) to the command modifies 
    its operation to remove directories.
10. The terminal can be used to open programs installed on the system and also to query them in various ways. 
You should already have a C++ compiler `g++`, the VSCode IDE, and git installed on your system. To 
make sure, run the following commands and record **only the first line** of each of the outputs as `1b`, `1c`, and `1d`, respectively.
    ```
    g++ --version
    code --version
    git --version
    ```

# Command-Line Cheatsheet
1. `pwd` or "print working directory" prints the full path of the current directory of the terminal.
2. `cd <directory>` lets you "change directory" to `<directory>` directory. Two noteworthy shortcuts for directory paths: `.` refers to the current directory and `..` refers to the parent directory.
3. `ls` "lists" the directories and files contained within the current directory.
4. `mkdir <directory>` creates directory `<directory>` within the current directory.
5. `rm <file>` removes the argument file.
6. `rm -r <directory>` remvoves the argument directory, 
where `-r` is an *option* that modifies the behavior of the `rm` command to work on directories.