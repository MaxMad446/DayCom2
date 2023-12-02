// Auto-generated module | 2026-05-13T21:01:30.872387
#include <iostream>
#include <vector>

int compute_255() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
