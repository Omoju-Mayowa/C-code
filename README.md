# C Programming Repository


This repository exists because my university decided that an Introduction to Programming course worth 3 units was a good idea. And honestly? They were right. That was the moment I realized being unserious was no longer an option.

So I made a decision.

Instead of letting my C codes disappear into random folders on my laptop (never to be seen again), I created this repository to document everything properly. Every concept, every practice question, every experiment — stored here.

---

## Why This Repo Exists

Let’s be honest.

At first, the idea was simple:
Build consistency. Build commits. Stay accountable.

But over time, it became more than that.

This repo now serves as:

- A structured archive of my learning process
- A reference point for revision
- A public record of improvement
- A possible guide for anyone starting out with C


If you’re a student taking an introductory programming course, you might find something useful here. If you’re revising fundamentals, this could serve as a quick reference. If you’re just curious about how someone else approaches problems — welcome.

---

## What to Expect

- Basic C programs
- Practice exercises
- Problem-solving attempts
- Occasional experimentation
- Incremental improvement over time


I won’t claim this is elite-level production code. It’s learning code. It evolves. Some solutions may be simple. Some may be over-engineered. Some may make future-me cringe.

**But hey, they work and reflect growth also**

---

## Final Note

This repository is less about perfection and more about discipline.
Consistency over hype. Progress over comfort.

If it helps you, great.
If it motivates you to start your own learning repo, even better.
 
Let’s build.

---

## Project Directory

```
c_projects/
├── Makefile
├── README.md
└── src/
    ├── archive/ (Code I'm not proud of, PS: has a lot of syntax errors, some don't tho)
    ├── arrays/ (Arrays and Strings)
    ├── basics/ (Variables, operators, simple programs)
    ├── contol_flow/ (if, swtich, loops)
    ├── functions/ (functiom practice)
    ├── input_output/ (prrintf, scanf, loops)
    ├── projects/ (mini projects of mine)
    ├── sandbox/ (Experimental grounds for Unstable Code🙃)
    └── structs/ (structs and enums)
```

---
## How to run code (Using make)
By normal means you can use GCC or coderunner but I added make so it gets easier for you.

- #### To build/compile everything
```sh 
    make
```

- #### To Run a specific program
Lets say you wanna run pizza (I stored that in projects btw).

Meaning we have a path of `src/projects/pizza.c`

The ideal command is 
```sh 
    make run PROGRAM=src/proects/pizza
```

We don't add the .c(extension) cause the Makefile is built to run without the extension

> Important Note: Makefile stores everything in a build directory, it also makes one if it doesn't exist but considering repo size and uploading a build from my machine won't benefit you I added the build directory to my .gitignore file. You can build it yourself.

- #### Clean Builds
All the builds will take a questionable amount of space so I thought "Why not make a command to clean the builds?" and I did.
The command is:

```sh
    make clean
```


## Final Words
Well the code is completely free and I 100% give you go-ahead for re-use if you would like to.
It is for educational and experimental purposes also.

**Remember, The only thing stopping you from growing is you**