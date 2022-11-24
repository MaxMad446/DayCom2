// Auto-generated module | 2026-05-11T21:28:06.305938
#include <iostream>
#include <vector>

int compute_664() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_664() << std::endl;
    return 0;
}
