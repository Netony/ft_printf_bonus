NAME = a.out
SOURCES = main.c utils.c list_str.c
SOURCES_MANDA = 
SOURCES_BONUS =

LIBFT = libft.a
LIBGNL = libgnl.a

LIB = ft 
LIB2 = gnl

LIB_DIR = libft
LIB_DIR2 = get_next_line

# **************************************************************************** #

SRC_DIR = .
INC_DIR = .
OBJ_DIR = objs

SRCS := $(addprefix $(SRC_DIR)/, $(SOURCES))
SRCS_MANDA := $(addprefix $(SRC_DIR)/, $(SOURCES_MANDA))
SRCS_BONUS := $(addprefix $(SRC_DIR)/, $(SOURCES_BONUS))

OBJS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
OBJS_MANDA = $(addprefix $(OBJ_DIR)/, $(SOURCES_MANDA:.c=.o))
OBJS_BONUS = $(addprefix $(OBJ_DIR)/, $(SOURCES_BONUS:.c=.o))

INCS := $(addprefix $(INC_DIR)/, $(INCS))

LIBFT := $(addprefix $(LIB_DIR)/, $(LIBFT))
LIBGNL := $(addprefix $(LIB_DIR2)/, $(LIBGNL))

ifdef WITH_BONUS
	OBJS_NEW = $(OBJS_BONUS) $(OBJS) 
else
	OBJS_NEW = $(OBJS_MANDA) $(OBJS) 
endif

# **************************************************************************** #

MAKE = make
CC = gcc 
AR = ar
RM = rm

CFLAGS = -Wall -Wextra -Werror
ARFLAGS = crus
RMFLAGS = -rf

# Commands ******************************************************************* #

all : 
	$(RM) $(RMFLAGS) $(OBJS_BONUS)
	$(MAKE) $(NAME) 
	./a.out ababcabcd

bonus : 
	$(RM) $(RMFLAGS) $(OBJS_MANDA)
	$(MAKE) $(NAME) WITH_BONUS=1

clean :
	$(RM) $(RMFLAGS) objs objs_bonus */*.a */*.o */*/*.o

fclean : 
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)

re : 
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all bonus clean fclean re

# Dependency ***************************************************************** #

$(NAME) : $(OBJS_NEW) $(LIBFT) $(LIBGNL)
	$(CC) $(CFLAGS) $(OBJS_NEW) -I $(INC_DIR) -o $(NAME) -L $(LIB_DIR) -L $(LIB_DIR2) -l $(LIB) -l $(LIB2) 

$(LIBFT): 
	$(MAKE) -j3 -C $(LIB_DIR) bonus

$(LIBGNL): 
	$(MAKE) -j3 -C $(LIB_DIR2) all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $< -c -I $(INC_DIR) -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)
