package main

// Auto-generated | 2026-05-12T04:38:16.151721
import "fmt"

func Process_881() int {
    base := 90
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_881())
}
