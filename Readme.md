## This program is a grocery store item system that is able to store and process data that manage inventory and to keep business records.


The program will **execute** in the following format:

    lab4 date filename1 filename2

where lab4 is the name of the executable, date is today’s date in the form month/day/year where: month is 1-12, day is 1-31, year is some 4-digit year, 
filename1 is the data file that contains current inventory information to read in, filename2 is a data file that your program will create with the output inventory.

---

### The following data will be in the file in this order for **each grocery item**. Each field will be separated by a tab character.
- Grocery Item (Assume the name can contain white space)
- Grocery Store Department (Assume the department name can contain white space.)
- stock number (1 - 10000)
- Retail price of the item in dollars (a floating-point value)
- Wholesale price of the item in dollars (a floating-point value)
- Retail quantity purchased by customers (a whole number greater than or equal to zero)
- Wholesale quantity purchased by this store (a whole number greater than or equal to zero)

Before reading in the data for each grocery item, the program will determine and prompt to the user the difference between today’s date and the date specified in the first line of the file. The user will then decide whether to proceed or exit.

### If proceed, the program will do the following things.
1. Tell the user that the inventory has been read in from the file and how many grocery item
records were read in.
2. Prompt the user to select from the following 1-12 
**options** for processing data.

---

**Options1-12** are the following: 

1. Determine and print total revenue (from all grocery items sold): This is calculated as the sum of
(retail price * retail quantity) for all grocery items;

2. Determine and print total wholesale cost (for all grocery items): This is calculated as the sum of
(wholesale price * wholesale quantity) for all grocery items;

3. Determine and print the current investment in grocery items: This is calculated as the sum of
(wholesale price * (wholesale quantity – retail quantity));

4. Determine and print total profit (for all grocery items): This is total revenue (#1) minus (total
wholesale cost (#2) plus cost of current inventory (#3)); Total profit calculates as taking Total
Revenue then subtracting the money you've spent on product. Then, add back in the cost of the
items you still have on your shelves.

5. Determine and print total number of sales (total number of grocery items sold): This is calculated
as the sum of the retail quantities for all grocery items;

6. Determine and print average profit per sale: This is total profit (#4) divided by total number of sales
(#5);

7. Print grocery items in stock: This function must print each grocery item on a “Inventory List”
where (Wholesale quantity – Retail quantity >0). The output would be a “Title Line” that says
something like “Grocery items in Stock” then on subsequent lines, the number of grocery items
currently in stock (Wholesale – Retail) followed by a tab character then the stock number followed
by a tab character, then the Grocery store department followed by the tab character then the name
of the grocery item;

8. Print grocery items out of stock: This function must print each item on the inventory list where
(Wholesale quantity – Retail quantity == 0). The output would be a “Title Line” that says
something like “Grocery items out of Stock” then on subsequent lines the stock number followed
by a tab character, then the Grocery store department followed by the tab character then the name
of the grocery item;

9. Print all grocery items from a specific department. After prompt for a (sub)string of a particular
Department Name, this function must print each item on the inventory list where the Department
Name contains that string. For example, if the Department Name is “DAIRY DEPARTMENT”
and the substring read is “DAIRY” or “dairy”, then all “DAIRY DEPARTMENT” inventory items
must be printed out with appropriate headings along with the current number of items in stock.

10. Add a new grocery item (prompt the user to enter the data for a single grocery item, in the
format given above from the keyboard;

11. Delete grocery item (prompt the user to enter a stock number to delete from inventory: if the item
is not found in the linked list, print a message indicating an error, or if the list is empty, print an
error indicating that);

12. Write the current inventory in the linked list out to disk using filename2 from the command line,
free all dynamically allocated memory and exit the program. (The format of the file written to disk
must be such that it can be used as input to the program the next time it runs.)


### There is a testing file in this repo named *store_inventory*. 

---
