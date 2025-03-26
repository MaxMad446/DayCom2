// Auto-generated module | 2026-05-12T04:03:58.642112
#include <iostream>
#include <vector>

int compute_227() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
