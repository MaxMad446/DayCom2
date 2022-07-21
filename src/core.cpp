// Auto-generated module | 2026-05-11T21:11:51.129364
#include <iostream>
#include <vector>

int compute_904() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
