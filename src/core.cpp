// Auto-generated module | 2026-05-13T20:49:30.617627
#include <iostream>
#include <vector>

int compute_139() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
