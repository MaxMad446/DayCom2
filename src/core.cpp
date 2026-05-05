// Auto-generated module | 2026-05-12T06:22:10.246365
#include <iostream>
#include <vector>

int compute_677() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
