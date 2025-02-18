// Auto-generated module | 2026-05-12T03:59:20.957043
#include <iostream>
#include <vector>

int compute_693() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
