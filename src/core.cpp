// Auto-generated module | 2026-05-12T20:53:15.413507
#include <iostream>
#include <vector>

int compute_175() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
