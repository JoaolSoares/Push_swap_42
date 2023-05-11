
<p align="center">
    <img src="https://game.42sp.org.br/static/assets/achievements/push_swapm.png">
</p>

<p align="center">
    <img src="https://img.shields.io/badge/OS-Linux-blue" alt="OS">
    <img src="https://img.shields.io/badge/Language-C%20%7C%20C%2B%2B-orange.svg" alt="Language">
    <img src="https://img.shields.io/badge/Grade-125%2F100-brightgreen.svg" alt="Grade">
    <img src="https://img.shields.io/badge/Status-Completed-brightgreen.svg" alt="Status">
</p>

# push_swap
The seventh project from 42<br>
This project is about sorting data on a stack, with a limited set of instructions, and the smallest number of moves.

# Mandatory
## How to use
- Clone the repository
- Run `make` to compile the executable
- Run `./push_swap [numbers]` to execute the program

## Example
one to five arguments
``` bash
./push_swap 4 1 2 3 5
```

more than five arguments
``` bash
./push_swap 4 1 2 3 5 6 7 8 9 10
```


# Bonus
## How to use
- Clone the repository
- Run `make bonus` to compile the executable
- Run `./checker [numbers]` to execute the program

## Example
Correct organization of numbers
``` bash
./checker 3 2 1 4
pb
sa
rra
pa
ra
ra
[Ctrl + D] to finish
OK
```

Wrong organization of numbers
``` bash
./checker 3 2 1 4
pb
sa
[Ctrl + D] to finish
KO
```

