// Auto-generated module | 2026-05-12T03:46:58.040306
#include <iostream>
#include <vector>

int compute_255() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
