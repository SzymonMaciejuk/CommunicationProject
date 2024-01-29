# CommunicationProject

After downloading and extracting all files to the target directory just open terminal, go to this directory and perform command:

make

Everything should work and compile automatically. Two different scripts will be created - client_main and server_main.
server_main is responisble for receiving requests form client (specifically the keyboard input), counting number of characters in incoming request and sending that sum back to client.
client_main gets the keyboard input from the user, sends it to server and waits for it's response. 

To check if scripts work properly, you must execute them in right order: firstly server_main and then in a new terminal window client_main.
