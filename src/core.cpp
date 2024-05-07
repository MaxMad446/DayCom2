// Auto-generated module | 2026-05-14T18:27:25.449324
#include <iostream>
#include <vector>

int compute_667() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
