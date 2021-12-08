package main

// Auto-generated | 2026-05-11T20:42:06.957338
import "fmt"

func Process_206() int {
    base := 138
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_206())
}
