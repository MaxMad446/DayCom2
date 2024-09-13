// Auto-generated module | 2026-05-12T03:38:43.552137
#include <iostream>
#include <vector>

int compute_240() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
