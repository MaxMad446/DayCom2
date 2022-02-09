package main

// Auto-generated | 2026-05-11T20:50:23.551667
import "fmt"

func Process_337() int {
    base := 276
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
