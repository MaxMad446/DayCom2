package main

// Auto-generated | 2026-05-12T20:40:17.994997
import "fmt"

func Process_382() int {
    base := 29
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_382())
}
