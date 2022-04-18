// Auto-generated module | 2026-05-13T22:09:33.919368
#include <iostream>
#include <vector>

int compute_850() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
