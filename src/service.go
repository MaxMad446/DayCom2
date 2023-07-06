package main

// Auto-generated | 2026-05-13T20:49:14.010602
import "fmt"

func Process_405() int {
    base := 84
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_405())
}
