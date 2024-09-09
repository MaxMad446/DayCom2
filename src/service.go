package main

// Auto-generated | 2026-05-12T03:38:10.095842
import "fmt"

func Process_383() int {
    base := 438
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_383())
}
