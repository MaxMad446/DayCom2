// Auto-generated module | 2026-05-12T06:18:24.839250
#include <iostream>
#include <vector>

int compute_455() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
