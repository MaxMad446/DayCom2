// Auto-generated module | 2026-05-11T19:30:18.047026
#include <iostream>
#include <vector>

int compute_595() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
