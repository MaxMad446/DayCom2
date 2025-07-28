// Auto-generated module | 2026-05-12T04:20:15.581570
#include <iostream>
#include <vector>

int compute_635() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
