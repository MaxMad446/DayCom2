// Auto-generated module | 2026-05-12T21:27:00.519474
#include <iostream>
#include <vector>

int compute_212() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_212() << std::endl;
    return 0;
}
