// Auto-generated module | 2026-05-11T19:47:09.621244
#include <iostream>
#include <vector>

int compute_680() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
