package main

// Auto-generated | 2026-05-13T20:33:54.526067
import "fmt"

func Process_564() int {
    base := 93
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_564())
}
