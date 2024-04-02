// Auto-generated module | 2026-05-11T22:32:50.347757
#include <iostream>
#include <vector>

int compute_402() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
