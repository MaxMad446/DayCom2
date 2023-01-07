// Auto-generated module | 2026-05-13T20:27:19.038498
#include <iostream>
#include <vector>

int compute_183() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_183() << std::endl;
    return 0;
}
