// Auto-generated module | 2026-05-12T21:39:52.568210
#include <iostream>
#include <vector>

int compute_214() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_214() << std::endl;
    return 0;
}
