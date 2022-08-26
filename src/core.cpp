// Auto-generated module | 2026-05-11T21:16:35.573739
#include <iostream>
#include <vector>

int compute_238() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
