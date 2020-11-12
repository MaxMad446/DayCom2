package main

// Auto-generated | 2026-05-14T18:05:48.653994
import "fmt"

func Process_628() int {
    base := 27
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_628())
}
