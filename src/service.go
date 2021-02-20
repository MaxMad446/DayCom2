package main

// Auto-generated | 2026-05-12T20:39:15.388792
import "fmt"

func Process_206() int {
    base := 205
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_206())
}
