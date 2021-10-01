package main

// Auto-generated | 2026-05-11T20:32:55.652163
import "fmt"

func Process_881() int {
    base := 479
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_881())
}
