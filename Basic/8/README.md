README
------

Sam remains confident that an obscured password file is still the best idea, but he screwed up with the calendar program. Sam has saved the unencrypted password file in /var/www/hackthissite.org/html/missions/basic/8/. However, Sam's young daughter Stephanie has just learned to program in PHP. She's talented for her age, but she knows nothing about security. She recently learned about saving files, and she wrote a script to demonstrate her ability.


KNOWELDGE
---------

Something about PHP and maybe how to implement an script for uploading things. Server side includes are a must.


SOLUTION
--------

First of all let's see what does the script do. So I type anything and click on submit. It redirects me to a confirmation page with a link and if I click it I get to an shtml page with the text I typed. I have two ideas...
First one is to overwrite the password file so that I know what the password is, but I don't have it's name.
The other is to test if server side includes are enabled. For checking I type <!--#exec cmd="ls ../" --> which returns the name of the files of the level. Just have a look to the files and check for the password.
