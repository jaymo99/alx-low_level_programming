# :0x1C. C - Makefiles

## Resources
* Makefile
* Installing the make utility
* make-official documentation

## General Learning Objectives
* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

## Overview
A Makefile is a file used by the make build automation tool to specify a set of rules for building and managing a project. It is commonly used in C projects to define the compilation and linking process.

Here's a basic example of a Makefile for a C project
	CC = gcc
	CFLAGS = -Wall -Wextra

	SRCS = main.c utils.c
	OBJS = $(SRCS:.c=.o)
	TARGET = myprogram

	all: $(TARGET)

	$(TARGET): $(OBJS)
		$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

	.c.o:
		$(CC) $(CFLAGS) -c $< -o $@

	clean:
		rm -f $(OBJS) $(TARGET)


In this example, we define variables for the C compiler (`CC`) and compiler flags (`CFLAGS`). We also define the source files (`SRCS`), object files (`OBJS`), and the target executable (`TARGET`).

The rule `all` specifies the target to build when we run `make` without any specific target. It depends on the `$(TARGET)` rule.

The `$(TARGET)` rule depends on the object files (`$(OBJS)`). It invokes the C compiler (`$(CC)`) with the specified compiler flags (`$(CFLAGS)`) to link the object files into the final executable.

The `.c.o` rule is a pattern rule that describes how to compile C source files into object files. It uses the C compiler (`$(CC)`) with the specified compiler flags (`$(CFLAGS)`) to compile each source file (`$<`) into an object file (`$@`).

The `clean` rule is used to remove the compiled object files and the target executable.

To build the project, you can simply run `make` in the directory containing the Makefile. It will compile the necessary source files and generate the executable specified by `TARGET`. If you run `make clean`, it will remove the compiled files.

**Note:** The indentation in a Makefile must be done with a tab character, not spaces.

This is just a simple example, and Makefiles can be more complex depending on the requirements of your project. However, it should give you a basic understanding of how to create a Makefile for a C project.


## QuickStart guide to creating Makefiles
In a Makefile, ***rules*** define how to build ***targets*** and their ***dependencies.*** Each rule consists of a `target`, `dependencies`, and `commands`.

Let's break down the example rule in my Makefile (0-Makefile):

	school: main.c school.c
		gcc main.c school.c -o school

* **Target:** The target is the file or task that the rule describes how to build. In this case, the target is `school.` It is the desired output file, which will be created by the rule.

* **Dependencies:** Dependencies are the files or tasks that the target depends on. In your example, the dependencies are `main.c` and `school.c.` This means that if any of the dependencies change, the target (`school`) needs to be rebuilt.

* **Commands:** The commands are the actions that need to be executed to build the target. In my case, the command is `gcc main.c school.c -o school`. This command invokes the `gcc` compiler to compile `main.c` and `school.c` into an executable named `school`.

When you run `make` with a specific target (e.g., `make school`), Makefile looks for the corresponding rule and checks if any of the dependencies have changed. If a dependency has changed or the target doesn't exist, Makefile executes the commands associated with the rule to build the target.

The `all` rule is a special rule that is typically used as the default target. It specifies what should be built when you simply run `make` without specifying a target. 
In my example (0-Makefile), the `all` rule is defined as `all: school`, meaning that when you run `make all`, it will build the `school` target.

<br>

Here are a few additional points to keep in mind when working with Makefiles:
* **Indentation**: Make sure to use a tab character (not spaces) for indentation in the Makefile. Spaces can cause issues as they are not recognized by Make.

* **Automatic Variables**: Make provides a set of automatic variables that you can use within the commands of a rule. For example, `$@` represents the target, `$<` represents the first dependency, and `$^` represents all dependencies. These variables can make your Makefile more flexible and concise.

* **Phony Targets**: Sometimes you may want to define targets that don't correspond to actual files, but rather represent tasks or actions. These are called phony targets and can be declared using the `.PHONY` directive. For example, `.PHONY: clean` declares the `clean` target as a phony target, which is commonly used to clean up generated files.

* **Include Other Makefiles**: You can include other Makefiles using the `include` directive. This allows you to organize your Makefile into smaller, reusable modules.

<br>

These are just a few concepts to get started with Makefiles.
