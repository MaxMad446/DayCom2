// Auto-generated module | 2026-05-12T21:13:00.104456
#include <iostream>
#include <vector>

int compute_735() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_735() << std::endl;
    return 0;
}
