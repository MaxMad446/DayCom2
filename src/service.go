package main

// Auto-generated | 2026-05-11T20:18:58.666408
import "fmt"

func Process_113() int {
    base := 330
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}
