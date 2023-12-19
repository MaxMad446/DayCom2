// Auto-generated module | 2026-05-13T21:02:56.132250
#include <iostream>
#include <vector>

int compute_676() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
