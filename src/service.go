package main

// Auto-generated | 2026-05-13T20:31:37.464949
import "fmt"

func Process_811() int {
    base := 461
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_811())
}
