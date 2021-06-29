// Auto-generated module | 2026-05-12T20:49:52.235405
#include <iostream>
#include <vector>

int compute_952() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
