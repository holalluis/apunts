#!/usr/bin/expect -f

spawn telnet 192.168.1.1
expect "Login:"
send -- "1234\r"
expect "Password:"
send -- "1234\r"
expect " -&gt; "
