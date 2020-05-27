// Auto-generated module | 2026-05-11T19:28:36.425990
#include <iostream>
#include <vector>

int compute_763() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
