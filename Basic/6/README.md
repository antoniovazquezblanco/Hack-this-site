README
------

Network Security Sam has encrypted his password. The encryption system is publically available.


KNOWELDGE
---------

This requires some logic.


SOLUTION
--------

I've got the encrypted password so I only need to undone that. Lets analyze the encryption. The first thing is that if I put 1 char it returns 1 char, the same for 2, 3 and so on and so forth. The second thing is that the first character it's always the same encrypted and unencrypted. The next thing is that if I put "aaa" it returns "abc". B is a+1 and c is a+2. It may be the same for other chars in other possitions. After some tests this is right. You can consult an ASCII table for those characters that aren't in the alphabet. You can unencrypt the password manually but I've created a program for that that you can find in the decrypter folder.