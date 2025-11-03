// Auto-generated module | 2026-05-12T04:33:28.306898
#include <iostream>
#include <vector>

int compute_871() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
