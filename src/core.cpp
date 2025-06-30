// Auto-generated module | 2026-05-12T04:16:29.040963
#include <iostream>
#include <vector>

int compute_559() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
