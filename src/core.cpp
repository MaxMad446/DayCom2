// Auto-generated module | 2026-05-11T22:46:47.231636
#include <iostream>
#include <vector>

int compute_237() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
