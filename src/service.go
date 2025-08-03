package main

// Auto-generated | 2026-05-12T04:21:03.298540
import "fmt"

func Process_730() int {
    base := 39
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
