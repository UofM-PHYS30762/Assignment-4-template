This is the template for the third assignment. 

# Notes

The template is prepared to have everything in a single file, since splitting in interface and implementation gives challenge marks and the students should be using elements from the pre-lecture to make that compile (tip: remember also include guards like #IFNDEF to avoid including the headers too many times). 

# Tips on compilation 

Suggestion: don’t write all code at once, write and test one thing at a time. 

Example:  
   * start with making the particle class with only constructor and destructor, instantiate it in main()
   * compile (if it does, commit & push to git)
   * add the other data member and member function, test them in main() 
   * compile (& commit)
This way if something doesn’t compile by the submission deadline you still have something that compiles to submit!

To compile one file (assuming g++-11 is how you call your compiler, this may change depending on whether you're on windows or mac): 

`g++-11 assignment-4.cpp -o assignment-4.o -std=gnu++17`

The std=gnu++17 makes sure that the compiler you're using locally (which you should have installed following the instructions on the Quickstart guide on Blackboard/Git) picks up the same version of the C++ standards as the computers in the lab.

To compile multiple files (YourMain is probably going to be assignment-4.cpp, and you can have as many YourClassImplementationFile.cpp as you'd like): 

`g++-11 YourClassImplementationFile.cpp YourMain.cpp -o assignment-4.o -std=gnu++17`

You can also find out more about Makefiles [here](https://www.gnu.org/software/make/manual/html_node/Introduction.html) or [in this simple starter guide](https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/) but we won't cover these in the course.
