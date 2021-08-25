# simple_shell

This project is a part of the curriculum of software engineering for the low-level programming module at [Holberton School](https://www.holbertonschool.com/tn/en/ "Holberton School").
### Synopsis
This repository holds all the code necessary for our custom simple shell to run.
Our shell currently handles the executions of executables found in the
environmental variable PATH, with or without their full paths. Sample commands
that our shell supports include ```ls``` (```/bin/ls```), ```pwd```, ```echo```,
etc. We've also created the following builtins.



### Builtins
* ```exit``` exits shell (```Usage: exit [status]```)
* ```env``` prints environmental variables (Usage: ```env```)
* ```help``` shows the help menu or help for specific command (Usage: ```help``` or ```help name value```)
* ```cd``` changes directories (Usage: ```cd [-][~][path]```)

### Authorized functions and system calls: <br/>
	* access (man 2 access) <br/>
	* chdir (man 2 chdir) <br/>
	* close (man 2 close) <br/>
	* closedir (man 3 closedir) <br/>
	* execve (man 2 execve)<br/>
	* exit (man 3 exit) <br/>
	* fork (man 2 fork) <br/>
	* free (man 3 free) <br/>
	* stat (__xstat)(man 2 stat) <br/>
	* lstat (__lxstat)(man 2 lstat) <br/>
	* fstat (__fxstat)(man 2 fstat```) <br/>
	* getcwd (man 3 getcwd) <br/>
	* getline (man 3 getline) <br/>
	* kill (man 2 kill) <br/>
	* malloc (man 3 malloc) <br/>
	* open (man 2 open) <br/>
	* opendir (man 3 opendir) <br/>
	* perror (man 3 perror) <br/>
	* read (man 2 read) <br/>
	* readdir (man 3 readdir) <br/>
	* signal (man 2 signal) <br/>
	* strtok (man 3 strtok) <br/>
	* wait (man 2 wait) <br/>
	* waitpid (man 2 waitpid) <br/>
	* wait3 (man 2 wait3) <br/>
	* wait4 (man 2 wait4) <br/>
	* write (man 2 write) <br/>
	* _exit (man 2 _exit) <br/>
	* isatty (man 3 isatty) <br/>
	* fflush (man 3 fflush) <br/>

###  Compilation

Our shell will be compiled this way:

`$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

And it has been tested on Ubuntu 14.04 LTS in a VirtualBox on it via Vagrant(2.2.14) using the Betty style.

### Activate the shell
```
(your_terminal)$ ./hsh
$
```
Sample Usage
```
$ ls -al
total 4
-rw-rw-r-- 1 vagrant vagrant   234 Mar 28 19:32 file1.c
-rw-rw-r-- 1 vagrant vagrant    69 Mar 28 19:32 file2.c
$ echo "This is a pretty cool!"
This is pretty cool!
