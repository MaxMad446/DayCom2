package main

// Auto-generated | 2026-05-11T20:06:12.554534
import "fmt"

func Process_337() int {
    base := 455
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_337())
}
