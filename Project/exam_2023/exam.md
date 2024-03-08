1. The current directory initially contains two files: 'alice.txt' and 'charlie.txt'.
   What will be the display (output) of
   `$ ls`
   after the following commands?
   <br>
   `$ ls` <br>
   `alice.txt charlie.txt` <br>
   `$ cp alice.txt bob.txt` <br>
   `$ mv charlie.txt daphne.txt`
   <br> <br>

   [ATTEMPT OF ANSWER]
   <br>
   Result: `alice.txt bob.txt daphne.txt`
   Command `cp file1.txt file2.txt` copies `file1` into `file2`, and creates `file2` if it doesnt exist yet. Command `mv file1.txt file2.txt`, renames `file1.txt` into `file2.txt`.

2. Choose the appropriate commands for the actions below. <br>
   `C1: $ cp ~/myFile.txt ..` <br>
   `C2: $ cp ~/myFile.txt .` <br>
   ` C3: $ mkdir myDir` <br>
   `C4: $ cp ../myFile.txt .` <br>
   ` C5: $ cd myDir` <br>
   `C6: $ man myFile.txt` <br>
   `C7: $ ls \*` <br>

   [ATTEMPT OF ANSWER]

   C7 - List all files in the current directory<br>
   C2 - Copy the file myFile.txt from the home directory to the current directory<br>
   C5 - Enter into the directory myDir (existing in the current directory)<br>
   C3 - Create a new directory myDir

3. Which type(s) of loop should be preferred when it is possible that the block of code will not be executed ?<br>
   Choose one reply:<br>
   A) "Do" or "While" loop<br>
   B) "Do" and "While" loops<br>
   C) "While" loop<br>
   D) "Do" loop<br>

   [ATTEMPT OF ANSWER]
   B)

4. Which of the following type name DO/DOES NOT represent a C++ fundamental type?<br>
   A) double<br>
   B) char<br>
   C) vector<br>
   D) void<br>
   E) string<br>

   [ATTEMPT OF ANSWER]
   A) double -fundamental <br>
   B) char - fundamental<br>
   C) vector- not fundamental<br>
   D) void - fundamental<br>
   E) string - not fundamental<br>

   all of the fundamental: char (Character)
   int (Integer)
   float (Floating point)
   bool (Boolean)
   double (Double floating point)
   void (valueless)

5. Given the following snippet of code:
   `double resultDensity = elements.back().getDensity();
string resultDensityName;
for (auto element : elements) {
if (element.getDensity() < resultDensity) {
resultDensity = element.getDensity();
resultDensityName = element.getName();
}
}`

   <em>describe shortly what is the content of variable 'resultDensityName'.</em> <br> <br>
   [ATTEMPT OF ANSWER]
   <br>
   resultDensityName takes the name of the element if its density is inferior to the value resultDensity.

6. What will be the values of 'x' and 'y' variables after the following instructions? <br>
   `int x=1, y=1;`<br>
   `x--;`<br>
   ` y++;`<br>
   `y=x;`<br>
   `x--;`<br>
   `y++;`<br><br>
   [ATTEMPT OF ANSWER]
   C) x = -1, y = 1

7. How many times will the following code print each "Looping over counter" message?
   `int counter = -10;
while (counter < 237) {
cout << "Looping over counter" << endl;
counter = counter + 100;
}` <br><br>
   [ATTEMPT OF ANSWER]
   3

8. What will be the output of the following code?
   `#include <iostream>
using namespace std;
int sum(int a = 4, int b = 3, int c = 2, int d = 1) {
return a + b + c + d;
}
int main() {
int b=3, c=2;
cout << sum(b, c) << endl;
}`<br><br>

   [ATTEMPT OF ANSWER] 8. The name of the variable does not interfere, only the position in the function is relevant.

9. How many times will the following code print each message?
   [ATTEMPT OF ANSWER] first loop: 10 times
   second loop: 8

10. The correct statements are:
    A) C++ strings are defined in the header <string>
    D) The string type is provided by the standard library

Explanation:
A) In C++, strings are defined in the header file <string>, which provides a string class that represents a sequence of characters.

B) This statement is not entirely correct. Although strings can be represented as an array of characters, the string type in C++ is not a built-in array of characters. Instead, it is a class provided by the standard library that provides various string manipulation functions.

C) This statement is incorrect. In C++, there are no built-in types for the use of strings. Instead, strings are provided as a class in the standard library.

D) This statement is correct. The string type is provided by the standard library in C++.

E) This statement is partially correct. While a string can be thought of as a chain of characters of char type, the string type in C++ is not simply a chain of characters. It is a class that provides various string manipulation functions.

thanks mistral.ai

11. In order to rename one of your files under version control using Git, which command will you use:<br><br>
    [ATTEMPT OF ANSWER]
    B) git mv

12. In which context the C++ expression below can be used ?
    `setprecision(int numDecimalDigits)`<br><br>
    [ATTEMPT OF ANSWER]
    A) This expression can be used to specify the number of digits after the decimal point for formatting output

13. [ATTEMPT OF ANSWER] 100
14. Which of the statements below IS correct?
    [ATTEMPT OF ANSWER]
    D) The pointer type is formed by the type of the pointed object and \*

15. [ATTEMPT OF ANSWER] 2
16. [ATTEMPT OF ANSWER] B)

17. [ATTEMPT OF ANSWER] remove return line, because the result should be copied in the `full` variable provided in the parameter of the function. <br>
    `void getFullName(string first, string last, string& full){
    string name = first;
    name.append(" ");
    name.append(last); full = name;
}`
18. [ATTEMPT OF ANSWER] A) 6.
19. [ATTEMPT OF ANSWER] Building building;
    building.construct(2.3);
    cout << building.getHeight() << endl;
20. C)
21. About ROOT
    ROOT is a framework for data processing, born at CERN, at the heart of the research on high-energy physics. Every day, thousands of physicists use ROOT applications to analyze their data or to perform simulations. With ROOT you can:

Save data You can save your data (and any C++ object) in a compressed binary form in a ROOT file. The object format is also saved in the same file: the ROOT files are self-descriptive. Even in the case the source files describing the data model are not available, the information contained in a ROOT file is be always readable. ROOT provides a data structure, the tree, that is extremely powerful for fast access of huge amounts of data - orders of magnitude faster than accessing a normal file.

Access data Data saved into one or several ROOT files can be accessed from your PC, from the web and from large-scale file delivery systems used e.g. in the GRID. ROOT trees spread over several files can be chained and accessed as a unique object, allowing for loops over huge amounts of data.

Mine data Powerful mathematical and statistical tools are provided to operate on your data. The full power of a C++ application and of parallel processing is available for any kind of data manipulation. Data can also be generated following any statistical distribution and modeled, making it possible to simulate complex systems.

Publish results Results can be displayed with histograms, scatter plots, fitting functions. ROOT graphics may be adjusted real-time by few mouse clicks. Publication-quality figures can be saved in PDF or other formats.

Run interactively or build your own application You can use the Cling C++ interpreter for your interactive sessions and to write macros, or you can compile your program to run at full speed. In both cases, you can also create a graphical user interface.

Use ROOT within other languages ROOT provides a set of bindings in order to seamlessly integrate with existing languages such as Python and R.
