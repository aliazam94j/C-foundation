# Debug Exercises

A set of C programs where each function has exactly one bug.
The comment above each exercise says what it should do — my job is to read the code,
figure out what is wrong, and fix it.

## Why I do this

Reading code and spotting mistakes is a different skill from writing code.
I can write a loop from scratch, but can I look at someone else's loop and see
why it produces the wrong output? These exercises train that.

## How it works

Each exercise is a function with one bug. I uncomment one at a time,
compile, run it, and find what is wrong before moving to the next.

## Exercises

| Exercise | Difficulty | Concept |
|---|---|---|
| 1 | Easy | Off-by-one in a loop |
| 2 | Easy | Wrong operator |
| 3 | Easy | Wrong format specifier in printf |
| 4 | Medium | Array index out of bounds |
| 5 | Medium | Assignment instead of comparison |
| 6 | Medium | String comparison with == instead of strcmp |
| 7 | Hard | Pointer not dereferenced correctly |
| 8 | Hard | Struct passed by value instead of by pointer |
