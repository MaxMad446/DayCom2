// Auto-generated module | 2026-05-11T20:02:40.327059
#include <iostream>
#include <vector>

int compute_270() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
