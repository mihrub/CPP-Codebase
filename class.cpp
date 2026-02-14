#include<iostream>
#include<string>
using namespace std;

class TooManyRequestsException {
    string message;
public:
    TooManyRequestsException(string msg) : message(msg) {}
    string what() const { return message; }
};

class Server {
    const int user = 5;
public:    
    void max_user() {
        cout << "Max User : " << user << endl;
    }
    int get_user_count() {
        return user;
    }
};

class Website : public Server {
    string address;
    static int count;
public:
    Website(string address) {
        this->address = address;
        count++;
    }

    Website(Website& original) {
        this->address = original.address;
        count++;
    }

    void visit() {
        try {
            checkLimit();
            cout << "You have visited " << address << endl;
        }
        catch (TooManyRequestsException& e) {
            cout << "Custom Exception Caught: " << e.what() << endl;
        }
        catch (const char* msg) {
            cout << "String Exception Caught: " << msg << endl;
        }
        catch (...) {
            cout << "Unknown Exception Occurred" << endl;
        }
    }

    // Throws exception to be caught in visit()
    void checkLimit() {
        if (count > get_user_count()) {
            if (count == 6) {
                // Demonstrate string-based throw
                throw "Warning: Count just crossed the limit!";
            }
            else if (count == 7) {
                // Demonstrate custom object exception
                throw TooManyRequestsException("429 - Too Many Requests (from object)");
            }
            else {
                // Demonstrate rethrowing
                try {
                    throw runtime_error("Standard Exception Triggered");
                }
                catch (...) {
                    cout << "Rethrowing from checkLimit()" << endl;
                    throw; // rethrow to caller
                }
            }
        }
    }
};

int Website::count = 0;

int main() {
    Website web1("www.facebook.com");
    web1.visit();

    Website web2("www.google.com");
    web2.visit();

    Website web3("www.instagram.com");
    web3.visit();

    Website web4("www.codeforces.com");
    web4.visit();

    Website web5(web1);
    web5.visit();

    Website web6(web2);
    web6.visit(); // should throw string-based exception

    Website web7(web3);
    web7.visit(); // should throw custom object exception

    try {
        Website web8(web4);
        web8.visit(); // should throw and rethrow standard exception
    }
    catch (exception& e) {
        cout << "Caught in main(): " << e.what() << endl;
    }

    return 0;
}