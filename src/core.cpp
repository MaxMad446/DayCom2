// Auto-generated module | 2026-05-11T21:38:26.600620
#include <iostream>
#include <vector>

int compute_477() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
