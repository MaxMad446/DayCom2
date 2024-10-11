// Auto-generated module | 2026-05-12T03:42:14.195085
#include <iostream>
#include <vector>

int compute_985() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
