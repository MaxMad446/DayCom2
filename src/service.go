package main

// Auto-generated | 2026-05-11T22:40:29.481113
import "fmt"

func Process_870() int {
    base := 388
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
