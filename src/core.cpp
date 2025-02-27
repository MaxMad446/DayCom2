// Auto-generated module | 2026-05-12T04:00:38.093652
#include <iostream>
#include <vector>

int compute_340() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_340() << std::endl;
    return 0;
}
