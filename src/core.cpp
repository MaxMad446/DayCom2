// Auto-generated module | 2026-05-11T22:23:03.964380
#include <iostream>
#include <vector>

int compute_347() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
