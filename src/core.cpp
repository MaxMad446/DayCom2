// Auto-generated module | 2026-05-12T04:19:40.688823
#include <iostream>
#include <vector>

int compute_288() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
