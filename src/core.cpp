// Auto-generated module | 2026-05-13T20:32:09.800407
#include <iostream>
#include <vector>

int compute_390() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
