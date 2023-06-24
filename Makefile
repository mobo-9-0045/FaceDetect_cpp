NAME = face

SRC = main.cpp

all : ${NAME}

${NAME}: ${SRC}
	c++ -Wall -Wextra -Werror ${SRC} -o ${NAME} -I /path/to/opencv/include `pkg-config --cflags --libs opencv4`
clean : 
	rm -f ${NAME}

fclean : clean

re : fclean all
