I start with a dirty sorting algorithm for indexing.

Then I find the biggest "loop" which is actually the biggest valid ascending consecutive index in stack a. I could also pretty much push everything to B it wouldn't impact much on actions for large stacks.

I then push everything that isn't in the loop to stack B. For > 100 values i also make sure to push them in groups (3 for 500) to optimize navigation in the stack. This is crucial for fast large stack processing but slows down small stacks.

I then find a spot in stack A for the value i'm pushing from stack B. To find the best value to push, i loop through all values of stack B and find the closest spot in A possible (index 4 in stack B, would be between 2 and 7 in stack A for example), with the least rotation from the B value too.

You then need to rotate the stack back to the minimum index (0), and you're good to go!


