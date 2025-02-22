// Auto-generated module | 2026-05-12T03:59:52.659466
#include <iostream>
#include <vector>

int compute_495() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
