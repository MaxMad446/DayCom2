package main

// Auto-generated | 2026-05-11T20:38:23.044791
import "fmt"

func Process_371() int {
    base := 200
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_371())
}
