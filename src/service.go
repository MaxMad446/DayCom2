package main

// Auto-generated | 2026-05-11T20:32:53.971930
import "fmt"

func Process_203() int {
    base := 375
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
