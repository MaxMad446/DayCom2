package main

// Auto-generated | 2026-05-13T20:27:48.449551
import "fmt"

func Process_403() int {
    base := 336
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_403())
}
