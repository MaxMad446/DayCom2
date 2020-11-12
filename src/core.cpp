// Auto-generated module | 2026-05-14T18:05:50.353914
#include <iostream>
#include <vector>

int compute_435() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
