// Auto-generated module | 2026-05-11T22:48:35.608852
#include <iostream>
#include <vector>

int compute_691() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_691() << std::endl;
    return 0;
}
