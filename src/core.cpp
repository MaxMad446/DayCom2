// Auto-generated module | 2026-05-12T20:57:20.274420
#include <iostream>
#include <vector>

int compute_656() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
