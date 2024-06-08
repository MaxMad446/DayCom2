package main

// Auto-generated | 2026-05-11T22:41:28.970452
import "fmt"

func Process_955() int {
    base := 37
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_955())
}
