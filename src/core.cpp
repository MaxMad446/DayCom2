// Auto-generated module | 2026-05-12T04:15:01.593231
#include <iostream>
#include <vector>

int compute_986() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
