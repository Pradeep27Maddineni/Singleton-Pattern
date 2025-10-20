class Singleton {
private:
    // Private constructor prevents instantiation from outside the class.
    Singleton() {
        // Initialization code, if needed
    }

    // Delete copy constructor and assignment operator to prevent external copying.
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    // Static method to get the single instance.
    // This is the thread-safe "Meyers' Singleton" implementation (since C++11).
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    // Example public method (optional)
    // void doSomething() { /* ... */ }
};