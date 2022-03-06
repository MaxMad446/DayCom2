package main

// Auto-generated | 2026-05-13T22:05:53.874273
import "fmt"

func Process_197() int {
    base := 472
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_197())
}
