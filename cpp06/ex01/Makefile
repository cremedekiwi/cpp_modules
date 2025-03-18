# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 15:16:09 by jarumuga          #+#    #+#              #
#    Updated: 2025/01/15 15:30:08 by jarumuga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serial

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCDIR = srcs
OBJDIR = objs

SRCS = $(addprefix $(SRCDIR)/, Serializer.cpp main.cpp)
OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.cpp=.o)))

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
