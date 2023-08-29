// Auto-generated module | 2026-05-11T22:04:21.200570
#include <iostream>
#include <vector>

int compute_167() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
