package main

// Auto-generated | 2026-05-12T21:11:59.758787
import "fmt"

func Process_297() int {
    base := 353
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
