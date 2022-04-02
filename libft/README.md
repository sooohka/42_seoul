# libft

## 프로그램 목적

> 42과정중 사용할 라이브러리 작성

[요구사항](./libft.pdf)

Normal functions

> memset bzero memcpy memccpy memmove memchr
> memcmp strlen strlcpy strlcat strchr strrchr
> strnstr strncmp atoi isalpha isdigit isalnum
> isascii isprint toupper tolower calloc strdup
> substr strjoin strtrim split itoa strmapi putchar_fd
> putstr_fd putendl_fd putnbr_fd

BONUS functions

> ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back
> ft_lstdelone ft_lstclear ft_lstiter ft_lstmap

## Installation

```sh
git clone https://github.com/sooohka/libft.git
cd path/to/libft
make
```

## Usage

```sh
gcc -o program-name -lft -L./ program-sources
```

## 사용가능한 함수

- malloc: 동적으로 메모리를 할당하는 함수
- free: 동적으로 할당한 메모리를 해제해주는 함수

## 회고

- unistd헤더에 있는 기본 문법들을 배움
- 동적 메모리 할당에 대해 배움
- 메모리 leak을 검사하는 방법을 익힘
- 포인터 개념이 헷갈리는 부분이 많았는데 포인터를 자유자재로 활용할 수 있게 됨
- 파일디스크럽터의 개념을 얼추 알게됨
- 라이브러리를 활용한 컴파일을 알게됨
