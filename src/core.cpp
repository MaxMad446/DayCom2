// Auto-generated module | 2026-05-11T21:42:17.959454
#include <iostream>
#include <vector>

int compute_975() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
