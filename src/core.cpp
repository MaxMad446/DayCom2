// Auto-generated module | 2026-05-11T21:00:37.460303
#include <iostream>
#include <vector>

int compute_542() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
