package main

// Auto-generated | 2026-05-11T20:49:42.494622
import "fmt"

func Process_763() int {
    base := 325
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
