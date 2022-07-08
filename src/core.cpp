// Auto-generated module | 2026-05-14T06:14:20.918449
#include <iostream>
#include <vector>

int compute_756() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
