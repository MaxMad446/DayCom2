package main

// Auto-generated | 2026-05-12T20:59:50.296994
import "fmt"

func Process_438() int {
    base := 118
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
