#include <unistd.h>

int main(void)
{
	char	*arg[] = { NULL };
	execve("./minishell", arg, arg);
}
