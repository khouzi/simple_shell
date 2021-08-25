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
