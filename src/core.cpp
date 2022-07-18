// Auto-generated module | 2026-05-14T06:15:04.702907
#include <iostream>
#include <vector>

int compute_538() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
