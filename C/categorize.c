#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	char line[80];
	
	if(argc != 5) {
		fprintf(stderr, "You need to supply five arguments");
		return 1;
	}
	
	FILE *in;
	if (!(in = fopen(argv[1], "r"))) {
		fprintf(stderr, "Can't open the file\n");
	}
	
	FILE *file1 = fopen(argv[3], "w");
	FILE *file2 = fopen(argv[4], "w");
	
	while (fscanf(in, "%79[^\n]\n", line) == 1) {
		
		if (strstr(line, argv[2])) {
			fprintf(file1, "%s\n", line);
		} else {
			fprintf(file2, "%s\n", line);
		}		
	}
	
	fclose(file1);
	fclose(file2);
	
	return 0;
}