// Auto-generated module | 2026-05-12T04:01:38.817898
#include <iostream>
#include <vector>

int compute_523() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
