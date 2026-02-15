package main

// Auto-generated | 2026-05-12T04:47:35.027599
import "fmt"

func Process_300() int {
    base := 70
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_300())
}
