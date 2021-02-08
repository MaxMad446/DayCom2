// Auto-generated module | 2026-05-12T20:38:10.488938
#include <iostream>
#include <vector>

int compute_211() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
