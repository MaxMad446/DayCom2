// Auto-generated module | 2026-05-11T19:51:38.709684
#include <iostream>
#include <vector>

int compute_713() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
