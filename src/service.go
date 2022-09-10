package main

// Auto-generated | 2026-05-14T06:19:27.330597
import "fmt"

func Process_307() int {
    base := 190
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_307())
}
