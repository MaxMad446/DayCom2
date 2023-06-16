// Auto-generated module | 2026-05-11T21:54:43.586558
#include <iostream>
#include <vector>

int compute_722() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
