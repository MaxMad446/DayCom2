// Auto-generated module | 2026-05-12T21:04:33.902480
#include <iostream>
#include <vector>

int compute_523() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
