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
	* access (man 2 access)
	* chdir (man 2 chdir)
	* close (man 2 close)
	* closedir (man 3 closedir)
	* execve (man 2 execve)
	* exit (man 3 exit)
	* fork (man 2 fork)
	* free (man 3 free)
	* stat (__xstat)(man 2 stat)
	* lstat (__lxstat)(man 2 lstat)
	* fstat (__fxstat)(man 2 fstat)
	* getcwd (man 3 getcwd)
	* getline (man 3 getline)
	* kill (man 2 kill)
	* malloc (man 3 malloc)
	* open (man 2 open)
	* opendir (man 3 opendir)
	* perror (man 3 perror)
	* read (man 2 read)
	* readdir (man 3 readdir)
	* signal (man 2 signal)
	* strtok (man 3 strtok)
	* wait (man 2 wait)
	* waitpid (man 2 waitpid)
	* wait3 (man 2 wait3)
	* wait4 (man 2 wait4)
	* write (man 2 write)
	* _exit (man 2 _exit)
	* isatty (man 3 isatty)
	* fflush (man 3 fflush)

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
```
In non-interactive mode, the shell is run from commands being piped in. The subshell
is only opened as the command is carried out and closes at the completion of the command.

```
echo "ls -l" | ./hsh
```

```
total 4
-rw-rw-r-- 1 vagrant vagrant   234 Mar 28 19:32 file1.c
-rw-rw-r-- 1 vagrant vagrant    69 Mar 28 19:32 file2.c
```

## Authors :writing_hand:

https://github.com/khouzi<br/>
https://github.com/youssefboussaid<br/>

### License.
This project is licensed under the [Holberton school](https://www.holbertonschool.com/tn/en/ "Holberton school") License.
