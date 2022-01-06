// Auto-generated module | 2026-05-11T20:45:52.485421
#include <iostream>
#include <vector>

int compute_528() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
