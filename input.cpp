#include <iostream>
#include <string>
class Keyboard {
public:
    std::string getInput() {
        return "User input from keyboard";
    }
};

class Mouse {
public:
    std::string getInput() {
        return "User input from mouse";
    }
};

// Right now this code assumes that input will come from the keyboard, 
// but we would like to be able to create an InputProcessor that 
// accepts input from the mouse (and potentially other input devices
// in the future). Note that each InputProcessor only needs to deal
// with one device.
class InputProcessor {
	std::string devicetype;
public:

	
	InputProcessor(std::string type) {
		devicetype = type;
	}


    void processInput() {
        std::string input;
		
		
        if (devicetype == "keyboard") {
            Keyboard keyboard;
            input = keyboard.getInput();
        } else if (devicetype == "mouse") {
            Mouse mouse;
            input = mouse.getInput();
        } else {
            input = "????";
        }
		
		
        std::cout << "Processing: " << input << "\n";

    }
};

// For demonstration
int main() {

    InputProcessor keyboardProcessor("keyboard");
    InputProcessor mouseProcessor("mouse");
    ///InputProcessor unknownProcessor("?");

    keyboardProcessor.processInput();
    mouseProcessor.processInput();
    //unknownProcessor.processInput();

}
