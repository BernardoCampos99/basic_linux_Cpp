```
mkdir Dev 
``` 
> this will create a "Dev" called folder (or directory) on your root directory, this will be the place to put our Development stuff. You can change the name if you want.
```
cd Dev 
```
> "cd" is used to make everything that we use after this command to be ran on the "Dev" folder.

Inside the "Dev" folder, we can creat subfolders in order to separate and organize different projects, and if you wih, you can create more and more subfolders to maybe use them to separate versions of your codes.
```
mkdir HelloWorld
```
> this directory will be used as our first project, called "HelloWorld".
```
clear 
```
> It'll clear you terminal screen. **ONLY** use this when you are sick of getting all of that terminal text on your screen **AND** you dont have anything important to take notes from it.

Now that the basic is done, you can move to the "Sudo" commands, which are going to setup our C++ environment.

```
sudo apt-get update 
```
> "sudo" can be called "Super user" commands, like having privileges on changing system files and stuff. What this line will do, is that it'll update all of your package repositories. Just to remember: Usually, "sudo" commands ask for an admin password in order to run.

After that's done, let's get to the packages we need.

```
sudo apt-get install vim g++ codelite cmake 
```
> This command will install:
> - "vim" as a Terminal Text Editor;
> - "g++" as a Compiler;
> - "codelite" as an IDE;
> - "cmake" which is used to control the Compiling process.
> Sometimes, installing stuff through terminal can install some high storage needy stuff, check if you have the freespace that the Terminal is asking and type ***Y***.

