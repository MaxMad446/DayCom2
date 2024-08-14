// Auto-generated module | 2026-05-11T22:50:11.958269
#include <iostream>
#include <vector>

int compute_688() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
