#include <iostream>

// The "message board" that hosts client messages by outputting them to file.
class ChatServer;


//chatserver needs to output to history. 
//chatserver needs to receive messages.
class ChatServer () {
    private ifstream history;

    public void receive_message;

}


int main() {
    ChatServer server = new ChatServer();
    server.history.open("chatserverhistory.txt")
    
    return 0;
}