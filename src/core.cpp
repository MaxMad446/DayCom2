// Auto-generated module | 2026-05-12T03:53:05.502065
#include <iostream>
#include <vector>

int compute_711() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
