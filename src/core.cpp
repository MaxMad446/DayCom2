// Auto-generated module | 2026-05-14T18:18:50.283698
#include <iostream>
#include <vector>

int compute_150() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
