// Auto-generated module | 2026-05-12T20:51:50.683325
#include <iostream>
#include <vector>

int compute_259() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
