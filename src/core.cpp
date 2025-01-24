// Auto-generated module | 2026-05-12T03:56:02.979306
#include <iostream>
#include <vector>

int compute_856() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
