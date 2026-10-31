# Instructions

Update this document where indicated \[look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## \[COS119-O 02]

* **\[ Kaitlynn M Barkley ]**
* **\[ 10/31/2026 ]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

* \[ `clear` ]: Clear the Screen
* \[ `pwd` ]: Print the "Working Directory"
* \[ `ls` ]: List files and folders
* \[ `ls -a` ]: List files and folders, including invisible files
* \[ `ls -lh` ]: List all files and folders, in human readable form
* \[ `cd <folders>` ]: Change directory
* \[ `cd /` ]: Change directory, go to root directory
* \[ `cd \~` ]: Change directory and go to user home directory
* \[ `cd ..` ]: Change directory, go up one folder level
* \[ `cd ../..` ]: Change directory, go up two folder levels
* \[ `cd \~/Desktop` ]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

\[ When attempting  the drag-and-drop action in the Visual Studio intergraded Developer PowerShell, the terminal did not accept direct drag-and-drop input from File Explorer. Instead copying the folder path and pasting it after `cd` ( cd C:\\FS\\COS\\Sovereign-Simulation\\images ) successfully updated the active working directory. ]

## Topic: Version Control \& Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

\[ Local, Centralized, and Distributed are the three types of Version Control.
Local Version Control, is a system where data is only stored one location.
Centralized Version Control--also know as CVCS-- is a  single central server holds the data for others to look at the working copies from it.
Distributed Version Control--lso know as DVCS-- is where you or others can clone a full copy of the repository onto ones own computer.]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

* \[ `git clone <url>` ]: Clone a repository
* \[ `git config --global user.name "Name"` ]: Set-up a global user name
* \[ `git config --global user.email "mail"` ]: Set-up a global email address (to match my GitHub account email)
* \[ `git status` ]: Shows the current state of your directory and staging area
* \[ `git add <file>` ]: Add modified files to the next commit
* \[ `git commit -m "Message"` ]: Make a commit with a new message
* \[ `git log` ]: Show my commit history
* \[ `git help` ]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

\[ There are three approaches to that Git uses to securely connect with remote repositories, but if we are strictly using HTTPS, we have 3 key steps.
Step 1: Clone the Repository; if it is private, you will be prompted for your username and password.
Step 2: Generate a Personal Access Token--also know as--PAT
Step 3: Authenticate Using the PAT; when prompted paste your PAT for the password, your PAT is you temp password, and Git will only remember the PAT for the duration of your session.
Step 4: Cache the Credentials, is where you can cache your credentials to avoid re-entering your PAT]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

* What is the purpose of this file?
<br>
\[Prevents tracking of sensitive files, and keeps the repository manageable.]
* What is the "**.DS\_Store**" file and why would you want to ignore it?
<br>
\[It would seem, that it is just clutter, or unnecessary, but is automatically created on macOS.]
* What other file or folder would you want to add to a .gitignore file and why?
<br>
\[From reading many articles, it would seem the best reason you would want to add .gitignore is, it helps keep a log of the files you want to keep that could be sensitive, like personal, or temporary files. it is also beneficial to keep certain content secure from anyone accessing your repository, like a new addition to a game or pernal information tracked by the git.]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

\[ Research Summary: What resource(s) did you find most helpful this past week and why? ]

**Terminal Commands**  
[GitHub](https://gist.github.com/cferdinandi/ef665330286fd5d7127d)

**Three Types of Version Control**  
[Coders Nexus](https://codersnexus.com/tutorials/github-complete-course/types-of-version-control-local-centralized-distributed)

**Git Commands**  
[Geeks for Geeks](https://www.geeksforgeeks.org/git/git-cheat-sheet/)

**Connecting to GitHub using Terminal**  
[Geeks for Geeks](https://www.geeksforgeeks.org/git/how-to-login-using-the-git-terminal/)

**Using .gitignore and Why it's Important**  
\[Site Address](https://www.geeksforgeeks.org/git/what-is-git-ignore-and-how-to-use-it/
https://glossary.iboysoft.com/ds-store.html)
