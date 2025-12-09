// Auto-generated module | 2026-05-12T04:38:09.587648
#include <iostream>
#include <vector>

int compute_648() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
