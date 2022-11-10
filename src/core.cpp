// Auto-generated module | 2026-05-11T21:26:17.635977
#include <iostream>
#include <vector>

int compute_500() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
