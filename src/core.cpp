// Auto-generated module | 2026-05-11T22:35:50.331371
#include <iostream>
#include <vector>

int compute_826() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_826() << std::endl;
    return 0;
}
