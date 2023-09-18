// Auto-generated module | 2026-05-11T22:06:51.024887
#include <iostream>
#include <vector>

int compute_444() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_444() << std::endl;
    return 0;
}
