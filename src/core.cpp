// Auto-generated module | 2026-05-13T20:58:18.919679
#include <iostream>
#include <vector>

int compute_238() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
