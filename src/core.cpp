// Auto-generated module | 2026-05-14T18:03:13.479778
#include <iostream>
#include <vector>

int compute_531() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
