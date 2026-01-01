// Auto-generated module | 2026-05-12T04:41:26.409769
#include <iostream>
#include <vector>

int compute_242() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
