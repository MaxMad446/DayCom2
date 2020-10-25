// Auto-generated module | 2026-05-12T19:57:55.228101
#include <iostream>
#include <vector>

int compute_227() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
