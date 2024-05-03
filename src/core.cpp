// Auto-generated module | 2026-05-11T22:36:51.990385
#include <iostream>
#include <vector>

int compute_155() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
