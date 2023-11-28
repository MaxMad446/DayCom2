// Auto-generated module | 2026-05-13T21:01:08.407846
#include <iostream>
#include <vector>

int compute_587() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_587() << std::endl;
    return 0;
}
