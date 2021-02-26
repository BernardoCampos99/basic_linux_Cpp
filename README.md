# basic_linux_Cpp
It's always good to know the basics, even if you are a master. That's where everyone begin ^^

In this project, you can learn the basics on how to best setup C++ on a linux machine. In the examples, I will be taking screenshots and executing those on a Virtual Machine of an Ubuntu 20.11.

I'll try my best to explain and detail every step that I take and I will be writing the instructions/tutorial in this readme file, so let's get to it!

First, take a look in the [ubuntu's desktop image](desktop_ubuntu.PNG) file, and click on the "Show Applications" button on the corner of your screen (those 9 dots on the corner). It'll open you Applications tab and show you your installed and recommended apps. click on the search bar and type [terminal](terminal_search.PNG). You'll see this black box with a line on it. Click on it to open the Application.

You'll see a [blank terminal](terminal_first_sight.PNG) and those white pieces can change depending on your username and the virtual machine PC name (or just the pc name, if you're not using a VM).

Now we can setup a directory to have our projects started. The commands that I'll use will be available [here](ubuntu_terminal_commands.md) and every command is in the order that needs to be used.

After the creation of the main folder, we can create the project folder, that will have the files to run a C++ job. Before continuing, you can check if the commands are functional and open those directories, it'll should look almost like [this](check_dir_commands.png) until now. In the top of the window, you'll should see a "House" icon and after it you'll see the directories that we created (in order to get there, I opened each of them through the "Files" app).

Now we get to the C++ part.

If you're using a newly installed Ubuntu and you want to start C++ projects, you'll need a compiler, so you can check again on the [commands](ubuntu_terminal_commands.md) file how to setup it correctly.

After that is done, we are going to create a new folder inside the "HelloWorld" directory called "src" which is our source folder for all of the source files, such as the ***.cpp*** files.

And now we can create the first file of our project, which is the "Main.cpp" file. More info [here](ubuntu_terminal_commands.md).

After all those commands, we can create our project, so type in the terminal:
```
./build.sh
```
and we already have our project ready to be edited.

If everything was done correctly, then you should get new files on your "HelloWorld" directory.
> You might get some warnings, but depending which case, they're not trouble.

So to run CodeLite you can type in the terminal:
```
codelite HelloWorld.workspace &
```
and we already have our project ready to be edited.
> the ***&*** on the end of the command is to keep the Terminal open after we type the codelite command.

When the codelite opens, you should see something like [this](codelite_first_sight.PNG).
