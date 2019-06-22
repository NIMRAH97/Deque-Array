# Deque-Array
firstly output screen display operations with operation number
 i.e: press 1  to add at start
      press 2  to add at end
      press 3  delete from start
      press 4  to delete at end
      press 5  check the size of array
      press 6  to dispaly the elements present in the array

then, the user have to select the operation that he wants to perform on array.
 For example, if user wants to add an element in the start, he have to press 1 
	      or if user wants to add an element in the end, he have to press 2 and so on..

if user press 1 and add element at the start:
		first of all, isfull() function checks whether the array is full or not. 
if array is full call the function doublethesize() and creat a new array with double in size as that of previous array.
copy the elements of previous array to new array and point to the new array.
if array has initialy no element i.e (n==0), increment the front and rear.
add the entered element at the start that passed as parameter, into array.
increase in the size of number of element'n'.

if user press 2 and add element at the end:
  first of all, isfull() function checks whether the array is full or not. 
if array is full call the function doublethesize() and creat a new array with double in size as that of previous array.
copy the elements of previous array to new array and point to the new array.
the rear size is incremented by 1 i.e: rear=rear+1.

if user press 3 delete from start:
	first of all funtion checks if number of elements in the array are less than or equal to one fourth of size array 
then reduces the size into half
	if there are no elements in the array then print array is already empty,
else array move from right to left.

if user press 4 delete from end:
	first of all funtion checks if number of elements in the array are less than or equal to one fourth of size array 
then reduces the size into half
	if there are no elements in the array then print array is already empty,
else array remove the element from end and decrement in rear.

if user press 5  to check the size of array:
	return size of array.

if user press 6 to display : 
	display all the elements present in array.

