// Auto-generated module | 2026-05-11T21:39:08.843159
#include <iostream>
#include <vector>

int compute_340() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
