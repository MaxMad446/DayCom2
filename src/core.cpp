// Auto-generated module | 2026-05-11T20:52:40.175718
#include <iostream>
#include <vector>

int compute_757() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
