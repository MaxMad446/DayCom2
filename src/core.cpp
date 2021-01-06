// Auto-generated module | 2026-05-11T19:58:15.472747
#include <iostream>
#include <vector>

int compute_193() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
