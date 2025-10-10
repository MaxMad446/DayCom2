// Auto-generated module | 2026-05-12T04:30:10.984216
#include <iostream>
#include <vector>

int compute_227() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
