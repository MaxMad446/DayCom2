package main

// Auto-generated | 2026-05-11T21:26:58.418341
import "fmt"

func Process_103() int {
    base := 165
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
