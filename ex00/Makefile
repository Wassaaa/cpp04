NAME = animal

CC					=	c++
CC_STRICT 			=	$(CC) $(CCF_STRICT)
DB_FLAGS			=	-g
OBJ_DIR				=	./obj
SRC_DIR				=	.

CCF_STRICT			=	-Wall -Wextra -Werror -g

SRCS				=	 \
						main.cpp \
						Animal.cpp \
						Cat.cpp \
						Dog.cpp \
						WrongAnimal.cpp \
						WrongCat.cpp \

OBJECTS				=	$(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

vpath %.cpp $(SRC_DIR)

################################################################################
# REQUIRED
################################################################################

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC_STRICT) $(OBJECTS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC_STRICT) -c $< -o $@

re: fclean all

################################################################################
# CLEAN
################################################################################

clean:
	rm -rf ./obj

fclean: clean
	rm -rf $(NAME)

################################################################################
# PHONY
################################################################################

.PHONY: all re clean fclean run