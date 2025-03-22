// Auto-generated module | 2026-05-12T21:14:48.762933
#include <iostream>
#include <vector>

int compute_418() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
