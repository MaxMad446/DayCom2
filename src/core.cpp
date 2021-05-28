// Auto-generated module | 2026-05-12T20:47:08.658392
#include <iostream>
#include <vector>

int compute_669() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_669() << std::endl;
    return 0;
}
