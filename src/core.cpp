// Auto-generated module | 2026-05-11T21:41:30.793402
#include <iostream>
#include <vector>

int compute_290() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
