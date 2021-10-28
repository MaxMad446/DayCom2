// Auto-generated module | 2026-05-12T21:00:14.368765
#include <iostream>
#include <vector>

int compute_255() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
