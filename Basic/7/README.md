README
------

This time Network Security sam has saved the unencrypted level7 password in an obscurely named file saved in this very directory. In other unrelated news, Sam has set up a script that returns the output from the UNIX cal command.


KNOWELDGE
---------

Knowing something about UNIX or Linux and it's command line. Searching in google for bash or terminal and trying Ubuntu may help. If you had a look to PHP may help you know how would you implement the cal command script and it could give you a clue of what you did wrong.


SOLUTION
--------

So the password file is in the actual directory... And no, it's name it is not in the form. Let's have a look to the script that returns cal text. I suppose it is something similar to this (for those who understand php):
```PHP
<?php
echo system("cal ".$variable);
?>
```
The thing is that system executes the comand inside its parentesis which is the command cal+"what we write in the form". So if I put a ";" for separating the command cal I can execute anything I would want. For having a look at the things in the current directory I want to execute the command "ls" so I put ";ls" and it returns the files in the directory. Check their contents, one of that will give you the password.