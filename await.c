#include <signal.h>

int main() {
	int sig = 0;
	sigset_t sigset;

	sigfillset(&sigset);
	sigwait(&sigset, &sig);

	return 0;
}
