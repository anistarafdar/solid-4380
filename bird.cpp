#include <iostream>

class Bird {
public:
    // virtual void fly() {
        // std::cout << "Bird is flying\n";
    // };
    std::string name = "Bird";
	
	
    virtual std::string getName() const {
        return name;
    }

	
    virtual void lay_egg() {
        std::cout << "Egg";
    }
};

class FlyingBird : public Bird {
	public:
		virtual void fly() {
			std::cout << "Bird is flying\n";
		};
	
};


class Ostrich : public Bird {
public:

    Ostrich() {
        name = "Ostrich";
    }

    // void fly() override {
        // throw std::runtime_error("Ostriches can't fly!");
    // }
};

class Eagle: public FlyingBird {
	
	public:
		Eagle() {
			name = "Eagle";
		}

		void fly() {
			std::cout << getName() << " is flying\n";
		}

};

// For demonstration
int main() {
    Eagle eagle;
    Ostrich ostrich;
    
    eagle.lay_egg();
    eagle.fly();

    ostrich.lay_egg();
    //ostrich.fly();
}
