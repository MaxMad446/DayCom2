// Auto-generated module | 2026-05-11T21:12:00.318501
#include <iostream>
#include <vector>

int compute_206() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
