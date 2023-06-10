package main

// Auto-generated | 2026-05-13T20:47:07.378729
import "fmt"

func Process_810() int {
    base := 358
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
