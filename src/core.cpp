// Auto-generated module | 2026-05-11T20:42:34.693522
#include <iostream>
#include <vector>

int compute_359() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
