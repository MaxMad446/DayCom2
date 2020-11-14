// Auto-generated module | 2026-05-11T19:51:18.737279
#include <iostream>
#include <vector>

int compute_780() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
