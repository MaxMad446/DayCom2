// Auto-generated module | 2026-05-12T19:58:56.435816
#include <iostream>
#include <vector>

int compute_705() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_705() << std::endl;
    return 0;
}
