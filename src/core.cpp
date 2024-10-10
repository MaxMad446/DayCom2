// Auto-generated module | 2026-05-12T03:42:01.726261
#include <iostream>
#include <vector>

int compute_255() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
