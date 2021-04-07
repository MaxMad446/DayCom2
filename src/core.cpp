// Auto-generated module | 2026-05-12T20:42:53.047971
#include <iostream>
#include <vector>

int compute_409() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
