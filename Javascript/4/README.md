README
------

Faith is trying to trick you... she knows that you're tired after all the math works...


KNOWELDGE
---------

Just Javascript and maybe something about browsers and javascript console tools.


SOLUTION
--------

When click event occurs on the check password button, Javascript "check()" function is called. If you search for this you'll find a piece of code like this:
``` Javascript
function check(x)
{
        "+RawrRawr+" == "hack_this_site"
	if (x == ""+RawrRawr+"")
        {
		alert("Rawr! win!");
                window.location = "../../../missions/javascript/4/?lvl_password="+x;
        } else {
		alert("Rawr, nope, try again!");
	}
}
```
The first line in this function is unuseful. If you have a look to the second line you'll notice that the password is compared to ""+RawrRawr+"". "" is nothing so ""+RawrRawr+"" is the same as RawrRawr. The only question is, what is the value of RawrRawr? You can do it in two ways. Search for this in source or use a Javascript console for getting it's value with "alert(RawrRawr);". For me the value is "moo".
