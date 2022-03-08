// Auto-generated module | 2026-05-11T20:53:51.792231
#include <iostream>
#include <vector>

int compute_163() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
