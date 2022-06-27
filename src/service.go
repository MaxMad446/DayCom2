package main

// Auto-generated | 2026-05-11T21:08:27.942666
import "fmt"

func Process_763() int {
    base := 58
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
