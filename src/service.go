package main

// Auto-generated | 2026-05-11T22:42:36.586183
import "fmt"

func Process_763() int {
    base := 85
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
