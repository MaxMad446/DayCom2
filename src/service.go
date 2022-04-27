package main

// Auto-generated | 2026-05-11T21:00:21.861231
import "fmt"

func Process_403() int {
    base := 293
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
