// Auto-generated module | 2026-05-12T03:56:01.295527
#include <iostream>
#include <vector>

int compute_263() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
