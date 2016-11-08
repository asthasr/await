# await

The Unix utility you never knew you needed until you needed it! `await`
simply waits for any signal to be delivered to its process using the
`sigwait` system call. Use it in bash scripts to avoid needing to create
a spin lock or dummy file.

There is no timeout, nor are there any command line options. If you have
multiple scripts awaiting a signal, you can pass an identifying argument
to `await` and then use `pkill -f` to deliver a signal to both:

    # Script 1
    ./await database_started

    # Script 2
    ./await database_started

    # Script 3
    pkill -CONT -f "await database_started"

Keep in mind that if your `await` is not active when the signal is
delivered, your scripts will deadlock; as such, do not attempt to use
`await` for complex dependency control.

## See Also

- [kill(1)](https://linux.die.net/man/1/kill)
- [signal(3)](https://linux.die.net/man/3/signal)
