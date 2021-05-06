// Auto-generated module | 2026-05-12T20:45:14.299527
#include <iostream>
#include <vector>

int compute_386() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
