package main

// Auto-generated | 2026-05-14T18:23:30.751340
import "fmt"

func Process_881() int {
    base := 383
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_881())
}
