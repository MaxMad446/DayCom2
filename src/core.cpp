// Auto-generated module | 2026-05-12T21:18:45.774428
#include <iostream>
#include <vector>

int compute_428() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
