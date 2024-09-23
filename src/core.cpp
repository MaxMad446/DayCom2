// Auto-generated module | 2026-05-12T03:39:53.766090
#include <iostream>
#include <vector>

int compute_417() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_417() << std::endl;
    return 0;
}
