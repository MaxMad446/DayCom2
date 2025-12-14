// Auto-generated module | 2026-05-12T04:38:54.908165
#include <iostream>
#include <vector>

int compute_541() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
