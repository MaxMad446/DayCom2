// Auto-generated module | 2026-05-12T04:17:13.379287
#include <iostream>
#include <vector>

int compute_153() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
