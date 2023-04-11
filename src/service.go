package main

// Auto-generated | 2026-05-13T20:35:23.449852
import "fmt"

func Process_438() int {
    base := 191
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
