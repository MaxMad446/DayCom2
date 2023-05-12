// Auto-generated module | 2026-05-13T20:37:52.371979
#include <iostream>
#include <vector>

int compute_693() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
