// Auto-generated module | 2026-05-13T22:03:05.636799
#include <iostream>
#include <vector>

int compute_823() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_823() << std::endl;
    return 0;
}
