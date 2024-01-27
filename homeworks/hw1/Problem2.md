# Problem 2
The objective of this problem is to set up your local git repository on your Desktop.

## Git Setup
Create a [Github](https:www.github.com) account if you don't have one. Enter your Github handle (without the `@` prefix) 
in the cell corresponding  to `2a` in `solutions.csv`. 

Set up your `class` repository on your `Desktop` using the following instructions. If you have 
already set it up in class, just run `git pull` to update your repo with the `hw1` directory that contains the homework specification and skip to step 7.
1. Log in to your remote desktop using FastX (see [Problem1.md](./Problem1.md)).
2. Open your terminal and navigate to your Desktop (`~/Desktop/`). You can use `pwd` to check whether you 
are in the correct directory.
3. Now we are going to [clone](./README.md#octocat-cloning) the `class` repo into this directory. To do this, we need the repo's URL. The URL will be shown here, but try to find it from the Github webpage of the repo, by clicking the green `<> Code ` button. Then, under HTTPS you will find the URL:
    ```
    https://github.com/uiowa-cs-3210-spr24/class.git
    ```
4. Copy this URL, and in your terminal, in the `Desktop` directory, run the command `git clone ` followed by 
the URL. Note that the keyboard shortcuts for copying (`Ctrl + c`) and pasting (`Ctrl + v`) don't work in 
the terminal so you have to paste the URL through the mouse right click button. The command you run 
would look like the following:
    ```
    git clone https://github.com/uiowa-cs-3210-spr24/class.git
    ```
5. Make sure the repository has been cloned locally. The command `ls` lists the contents of the working directory so running
it on the terminal should show a `class` directory (among possibly other directories/files).
6. Now open Visual Studio Code (`Applications -> Programming -> Visual Studio Code`) and open the `class` directory 
through `File -> Open Folder` and then navigating to the folder and selecting it (via the GUI). Now you have the 
VSCode IDE opened up and your workspace set up to the `class` directory.
7. A git directory is a regular directory in your file system initialized with some git files. You can check whether your directory is a git directory by navigating into it (via the Terminal) and running the `git remote` command.
    ```
    cd class
    git remote -v
    ```
    The `-v` options gives a more *verbose* output. Record each line of the output as `2b` and `2c`.
    The output should read:
    ```
    origin	https://github.com/uiowa-cs-3210-spr24/class.git (fetch)
    origin	https://github.com/uiowa-cs-3210-spr24/class.git (push)
    ```
    which is saying that your local directory is set up to track the remote repo in the URL (by fetching) and also that it can send updates to the same repo (by pushing).
8. Your local repo can either be (i) *ahead of*, (ii) *up to date with*, or (iii) *behind* the remote repo. You won't be pushing 
your changes to the repository yet, so you should only care about options (ii) and (iii) for now. You can run `git pull` to see if 
you are behind the remote repo.
   ```
   git pull
   #Already up to date.
   ```
   The commented output (comments begin with a `#` in the Linux context) is shown when it is the case that the remote 
   repo isn't ahead of the local one. Otherwise, it would pull the changes into the local repo. For instance, I might make changes to the homework specification which I might ask you to pull. Here, I want to bring up 
   the possibility of **merge conflicts**. A merge conflict occurs when local changes and 
   remote changes are incompatible. For example, suppose a text file initially contains the text `Hello World` and I change it to `Hello, World` and suppose that you change it locally to `HelloWorld` before you pull my changes. Now Git
   doesn't know whether it should override your local change (in which case it will be lost), or to 
   override the remote one (in which case we're not really pulling). It complains with a merge conflict. These are better 
   to prevent than fix. To prevent them, I'm not letting you push your solutions through Git just yet. You might still
   create merge conflicts by modifying the problem specification files, so don't touch the problem specification files 
   (and conversely, I will try not to touch the solution files). Typically I will try to push 
   the homework and then not push any more changes till your submissions are done (unless we find mistakes in the
   specification in which case I will have to push changes, but this shouldn't cause merge conflicts as long as you don't 
   make any changes to the specification files.)