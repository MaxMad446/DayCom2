// Auto-generated module | 2026-05-12T21:32:52.744606
#include <iostream>
#include <vector>

int compute_811() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_811() << std::endl;
    return 0;
}
