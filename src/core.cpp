// Auto-generated module | 2026-05-12T04:49:48.529132
#include <iostream>
#include <vector>

int compute_387() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
