// Auto-generated module | 2026-05-12T04:31:02.816651
#include <iostream>
#include <vector>

int compute_919() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_919() << std::endl;
    return 0;
}
