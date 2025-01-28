// Auto-generated module | 2026-05-12T21:10:21.225719
#include <iostream>
#include <vector>

int compute_342() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
