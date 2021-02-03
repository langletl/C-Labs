# Define required macros here

# Source directory and destination directory variables for the macro make install
LOCAL = "C:/Users/loicl/source/repos/Lab3_Advanced_C++_Part1/Lab3_Advanced_C++/Main.exe" 
DES = "C:/cygwin64/usr/local/bin"

# Variable that allows to list the source files
SRC = $(wildcard *.cpp)

# Variable that allows you to create object files from source files. 
# It will take all .cpp files in $(SRC) and compile them into an .o file. 
OBJ = $(SRC:.cpp=.o)

# Variable to define the name of our executable file.
NAME = Main

# This macro allows you to obtain an executable file from the .cpp files transformed into .o.
$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ)

# Phony target is always out-of-date and its command will be run. 
# The standard phony targets are: all, clean, install.
.PHONY: all clean install

# This macro is similar to the previous one since it allows you to make all compilations.
# It retrieves the macro from above.
all:	$(NAME)

# This macro allows you to delete the .o files and the executable.
clean:
	rm -f $(OBJ)
	rm -f $(NAME)

# This macro allows you to copy the executable to the /usr/local/bin directory.
install:
	cp -r $(LOCAL) $(DES) 

# This macro allows you to run the executable in your terminal
run:	$(NAME)
	./$(NAME) $(ARGS)
