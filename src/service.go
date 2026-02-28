package main

// Auto-generated | 2026-05-12T04:49:21.642205
import "fmt"

func Process_816() int {
    base := 468
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_816())
}
