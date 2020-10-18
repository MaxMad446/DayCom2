// Auto-generated module | 2026-05-11T19:47:40.943244
#include <iostream>
#include <vector>

int compute_263() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
