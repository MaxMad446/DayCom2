package main

// Auto-generated | 2026-05-12T04:48:24.319840
import "fmt"

func Process_609() int {
    base := 390
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_609())
}
