// Auto-generated module | 2026-05-11T19:48:09.366353
#include <iostream>
#include <vector>

int compute_730() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
