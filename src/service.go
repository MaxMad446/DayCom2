package main

// Auto-generated | 2026-05-12T04:14:47.758828
import "fmt"

func Process_831() int {
    base := 132
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
