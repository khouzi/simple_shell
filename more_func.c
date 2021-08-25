/**
* sig_handler - checks if Ctrl C is pressed by the input
* @signum: int
*Return: void
*/
void sig_handler(int signum)
{

	if (signum == SIGINT)
	{
		write(STDOUT_FILENO, "\n$ ", 3);
	}
	/*Return type of the handler function should be void*/
}
