// Auto-generated module | 2026-05-12T20:56:52.272980
#include <iostream>
#include <vector>

int compute_587() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
