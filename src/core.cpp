// Auto-generated module | 2026-05-12T04:16:34.613269
#include <iostream>
#include <vector>

int compute_770() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
