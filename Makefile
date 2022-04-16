# comments in a Makefile start with sharp 
# BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
#THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN 
#THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
#INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE 
#TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
# target all means all targets currently defined in this file
all: lab4.zip lab4

# this target is the .zip file that must be submitted to Carmen
lab4.zip: Makefile *.c lab4.h
	zip lab4 Makefile *.c lab4.h

lab4: *.c
	gcc -ansi -pedantic *.c -o lab4

# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o lab4 lab4.zip
