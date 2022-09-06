// Auto-generated module | 2026-05-14T06:19:04.006690
#include <iostream>
#include <vector>

int compute_690() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
