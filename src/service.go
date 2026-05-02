package main

// Auto-generated | 2026-05-12T06:21:38.529726
import "fmt"

func Process_900() int {
    base := 402
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_900())
}
