package main

// Auto-generated | 2026-05-11T20:33:20.618528
import "fmt"

func Process_418() int {
    base := 444
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_418())
}
