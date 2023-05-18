// Auto-generated module | 2026-05-11T21:50:53.939613
#include <iostream>
#include <vector>

int compute_588() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
