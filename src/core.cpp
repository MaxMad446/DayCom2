// Auto-generated module | 2026-05-11T22:27:25.904768
#include <iostream>
#include <vector>

int compute_768() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
