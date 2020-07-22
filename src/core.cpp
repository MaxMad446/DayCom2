// Auto-generated module | 2026-05-11T19:36:02.759263
#include <iostream>
#include <vector>

int compute_634() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
