# meson_link_test

This is a project to test how to create a Library that has an external  
dependency and how to distribute it to an project that uses this library.  
The library used for this test is a static freetype library.  

~~Currently this is not working, I am trying to figure out how to achieve this  
and update the repository with the result.~~  
I managed to figure out a way so this will compile and run fine, however as it is,  
it is not the way i would **like** to have the final solution.  
A preferred way would be, to have just a single library file accompanied by one or  
multiple header files that could just be included as is. Without any extra build  
file.

If you want to help and know a working solution or improvements, you are welcome to  
fork this and create a working solution or contact me and issue a pull request.  

#### Test system:
Windows 10 64 Bit  
Python 3.8.0  
Meson 0.53.1  
Ninja 1.9.0  
