#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 100

int main() {
    char command[MAX_COMMAND_LENGTH];
    
    while (1) {
        printf("SimpleShell$ ");
        fgets(command, sizeof(command), stdin);

        // Remove newline character
        size_t command_length = strlen(command);
        if (command[command_length - 1] == '\n') {
            command[command_length - 1] = '\0';
        }

        // Execute the command
        if (fork() == 0) {
            if (execl(command, command, NULL) == -1) {
                printf("Command not found or failed to execute\n");
                exit(EXIT_FAILURE);
            }
        } else {
            wait(NULL);  // Wait for the child process to finish
        }
	break;
    }

    return 0;
}

