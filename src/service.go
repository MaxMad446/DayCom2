package main

// Auto-generated | 2026-05-12T04:37:54.169848
import "fmt"

func Process_403() int {
    base := 131
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
