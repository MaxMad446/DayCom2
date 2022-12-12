// Auto-generated module | 2026-05-14T06:27:11.011737
#include <iostream>
#include <vector>

int compute_471() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
