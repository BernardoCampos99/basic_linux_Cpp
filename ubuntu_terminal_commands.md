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
> 
> Sometimes, installing stuff through terminal can install some high storage needy stuff, so check if you have the freespace that the Terminal is asking and type ***Y***.

Just to Remember, you can use "clear" command as much as you want, but please follow the *Clear Command instructions above*.

```
mkdir src
```
> this command will create the Source folder for the "HelloWorld" Project.

```
touch src\Main.cpp
```
> "touch" command creates a file with the current timestamp on it; you can always choose a name and an extension for you file, but this time we're naming it "Main.cpp".

```
vim CMakeLists.txt
```
> this command is going to generate a file and it's going to basically just nstruct _cmake_ how we want to actually generate our codelite project file.

```
vim build.sh
```
> this command is going to generate a file that will run CMake for us and generate the project.

For this file and the other one I will [leave] a .txt and a .sh file named "CMakeLists.txt" and "build.sh" with all the script already written in order to help you guys.

In order to run a script in linux, we need to make it executable, so we use the "chmod" command:
```
chmod +x build.sh
```
> This command will make "build.sh" executable in linux.
```
./build.sh
```
> This command will execute "build.sh" to create the project.
