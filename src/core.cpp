// Auto-generated module | 2026-05-12T04:02:46.768646
#include <iostream>
#include <vector>

int compute_734() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
