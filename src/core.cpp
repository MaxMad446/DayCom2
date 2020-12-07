// Auto-generated module | 2026-05-14T18:09:13.289136
#include <iostream>
#include <vector>

int compute_432() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
