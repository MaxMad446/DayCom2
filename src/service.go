package main

// Auto-generated | 2026-05-11T22:00:17.432927
import "fmt"

func Process_881() int {
    base := 201
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_881())
}
