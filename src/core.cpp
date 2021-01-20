// Auto-generated module | 2026-05-14T18:15:03.857939
#include <iostream>
#include <vector>

int compute_125() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_125() << std::endl;
    return 0;
}
