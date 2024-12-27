// Auto-generated module | 2026-05-12T03:52:27.774976
#include <iostream>
#include <vector>

int compute_364() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
