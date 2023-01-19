// Auto-generated module | 2026-05-11T21:35:34.751620
#include <iostream>
#include <vector>

int compute_627() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
