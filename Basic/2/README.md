README
------

Network Security Sam set up a password protection script. He made it load the real password from an unencrypted text file and compare it to the password the user enters. However, he neglected to upload the password file...


KNOWELDGE
---------

This can be logical reasoning but from my point of view, programming experience may give you some clues about it.


SOLUTION
--------

If there's no password file and asuming the check is done with something similar to a if statement the webpage is comparing our attempt with a null or with an empty string. The first thing I tryed was sending and empty test. It worked.