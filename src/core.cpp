// Auto-generated module | 2026-05-12T21:02:30.414838
#include <iostream>
#include <vector>

int compute_957() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_957() << std::endl;
    return 0;
}
