// Auto-generated module | 2026-05-11T21:27:45.443286
#include <iostream>
#include <vector>

int compute_506() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
