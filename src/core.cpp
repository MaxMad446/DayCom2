// Auto-generated module | 2026-05-11T22:44:53.289197
#include <iostream>
#include <vector>

int compute_748() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_748() << std::endl;
    return 0;
}
