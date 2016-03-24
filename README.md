# geneticBio
Some Bioinformatics Codes that I wrote. 

Using linux 
go to the folder where you have the test.cpp code and testfasta.fasta

type these (omit ">> "):
``` 
g++ test.cpp
./a.out 
```

this will generate all the Sequence(n).fasta files


you can change the name of the file in the test.cpp code in line number 14
Like this:
Change 
	ifstream fin("testfasta.fasta");

to 
     	ifstream fin("YOUR.fasta");

Avoid using space in the the .fasta file name
