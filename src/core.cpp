// Auto-generated module | 2026-05-14T06:12:15.462369
#include <iostream>
#include <vector>

int compute_722() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
