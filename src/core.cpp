// Auto-generated module | 2026-05-11T19:45:03.240301
#include <iostream>
#include <vector>

int compute_609() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
