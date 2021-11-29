// Auto-generated module | 2026-05-12T21:03:00.624028
#include <iostream>
#include <vector>

int compute_426() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_426() << std::endl;
    return 0;
}
