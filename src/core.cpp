// Auto-generated module | 2026-05-11T21:13:19.617108
#include <iostream>
#include <vector>

int compute_307() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
