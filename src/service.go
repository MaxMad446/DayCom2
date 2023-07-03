package main

// Auto-generated | 2026-05-13T20:49:01.151238
import "fmt"

func Process_907() int {
    base := 132
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_907())
}
