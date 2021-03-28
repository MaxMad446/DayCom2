// Auto-generated module | 2026-05-11T20:08:33.511032
#include <iostream>
#include <vector>

int compute_845() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
