// Auto-generated module | 2026-05-12T04:07:32.941283
#include <iostream>
#include <vector>

int compute_839() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_839() << std::endl;
    return 0;
}
