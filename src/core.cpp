// Auto-generated module | 2026-05-13T22:01:45.501399
#include <iostream>
#include <vector>

int compute_470() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
