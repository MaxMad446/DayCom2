package main

// Auto-generated | 2026-05-11T22:26:52.125389
import "fmt"

func Process_410() int {
    base := 131
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_410())
}
