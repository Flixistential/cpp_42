# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fboivin <fboivin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/18 16:19:38 by fboivin           #+#    #+#              #
#    Updated: 2024/04/18 16:19:38 by fboivin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler
CC = C++

# Compiler flags
FLAGS = -Wall -Wextra -std=c++11

# Project name
NAME = phonebook

# All cpp files
CPP_FILES = main.cpp PhoneBook.class.cpp Contact.class.cpp

# Corresponding .o files
OBJ_FILES = $(CPP_FILES:.cpp=.o)

# Header files
HEADERS = PhoneBook.class.hpp Contact.class.hpp

# Rule to create the executable
$(NAME): $(OBJ_FILES)
	$(CXX) $(FLAGS) -o $@ $^

# Rule to create object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(FLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJ_FILES) $(TARGET)

# Full clean rule for object files and executable
fclean: clean
	rm -f $(TARGET)

# Rule to re-make everything
re: fclean $(TARGET)
# PHONY targets
.PHONY: clean fclean re
