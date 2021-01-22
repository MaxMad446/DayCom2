// Auto-generated module | 2026-05-12T21:32:27.074007
#include <iostream>
#include <vector>

int compute_568() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
