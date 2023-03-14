package main

// Auto-generated | 2026-05-13T20:33:05.963542
import "fmt"

func Process_739() int {
    base := 382
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
