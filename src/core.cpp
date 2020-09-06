// Auto-generated module | 2026-05-11T19:42:15.029906
#include <iostream>
#include <vector>

int compute_961() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
