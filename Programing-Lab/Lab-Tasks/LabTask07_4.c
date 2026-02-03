
/*
Explanation

In this program:

int data[5] = {2,4,6,8,10};
cout << data;
cout << &data[0] << endl;
cout << &data[1] << endl;
cout << &data[2] << endl;


The statement int data[5] = {2,4,6,8,10}; creates an integer array of five elements stored contiguously in memory. 
Each integer in most systems occupies 4 bytes, meaning that consecutive elements are placed 4 bytes apart in memory.

When we write cout << data;, it doesn’t print the values of the array but instead prints the memory address of the first element. 
This is because the name of the array (data) itself acts as a pointer to the first element (&data[0]).

Similarly, cout << &data[0] also displays the address of the first element.
 The next lines, cout << &data[1] and cout << &data[2], print the addresses of the second and third elements respectively. 
 Each of these addresses increases by 4 bytes, showing that the elements are stored in sequential memory locations.

For example, if the first element’s address is 1000,
 then the addresses may appear as:

&data[0] = 1000
&data[1] = 1004
&data[2] = 1008


*/