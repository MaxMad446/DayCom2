package main

// Auto-generated | 2026-05-11T22:14:51.470914
import "fmt"

func Process_763() int {
    base := 185
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
