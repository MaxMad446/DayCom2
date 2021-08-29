package main

// Auto-generated | 2026-05-12T20:55:00.930470
import "fmt"

func Process_455() int {
    base := 175
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_455())
}
