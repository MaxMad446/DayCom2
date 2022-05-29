// Auto-generated module | 2026-05-13T22:13:05.461918
#include <iostream>
#include <vector>

int compute_512() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
