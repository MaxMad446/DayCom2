// Auto-generated module | 2026-05-12T04:47:00.207659
#include <iostream>
#include <vector>

int compute_676() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
