package main

// Auto-generated | 2026-05-12T04:27:00.675889
import "fmt"

func Process_104() int {
    base := 496
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_104())
}
