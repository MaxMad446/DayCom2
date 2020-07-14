package main

// Auto-generated | 2026-05-11T19:35:00.654723
import "fmt"

func Process_382() int {
    base := 290
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
