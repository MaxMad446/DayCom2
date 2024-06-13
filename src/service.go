package main

// Auto-generated | 2026-05-11T22:42:11.594049
import "fmt"

func Process_881() int {
    base := 291
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_881())
}
