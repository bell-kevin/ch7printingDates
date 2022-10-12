# ch7printingDates
Output dates in different formats


Write a project with a class called "Date" that has integer data members to store day, month, and year, and member functions to display the date in three formats. Those formats are:

          Slash format:    3/15/16                (month / day / last 2 digits of the year)
          
          Long format:     March 15, 2016   (word for month, day, year, with spaces and comma)
          
          Military format: 15 Mar 2016        (day, abbreviated word for month, year, with spaces)

Use a prototype for this class at the beginning of the file that looks like this:

   ![Ch 7 Dates class](https://github.com/bell-kevin/ch7printingDates/blob/main/saveMe1.PNG)

Below that declaration, write the implementation for each member function. Write a default constructor with no parameters that sets the date to January 1, 2001. Write a 3-parameter constructor that sets the data members ( month, day, and year) when the Date object is created with parameters. Write setter methods to set each variable, where you will validate the input for the data members -- month should be numbers from 1 to 12, day should be numbers from 1 to the number of days in the selected month, and year should be numbers from 1900 to 2099. Assume that February always has 28 days. You will need to call those setter methods inside the constructor to get that validation to run. If the code creates a Date object with no parameters, missing parameters, or with invalid parameters, use default values of 1 for the day, 1 for the month, and 2001 for the year (Jan 1, 2001).

Test the program in 3 ways: create a default date (no parameters) and print it in all 3 versions; create a date with 3 parameters that are hard coded (specified in the code) and print it in all 3 versions; and ask the user for the data to create another date and print it in all 3 versions. Here are examples:

All valid data from the user:

Ch 7 Printing Dates

All invalid data from the user:

Ch 7 Dates bad

Run the program twice with valid input and take screenshots. Then test invalid data: (1) invalid day with valid month and year, (2) valid day, invalid month, valid year, (3) valid day and month, invalid year), and (4) all 3 values invalid. Take screenshots of each of those results.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
