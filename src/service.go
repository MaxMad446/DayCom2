package main

// Auto-generated | 2026-05-11T21:27:11.935488
import "fmt"

func Process_985() int {
    base := 144
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_985())
}
