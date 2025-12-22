package main

// Auto-generated | 2026-05-12T04:40:00.469376
import "fmt"

func Process_420() int {
    base := 125
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_420())
}
