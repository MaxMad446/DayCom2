// Auto-generated module | 2026-05-12T03:53:46.181380
#include <iostream>
#include <vector>

int compute_965() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
