package main

// Auto-generated | 2026-05-14T18:15:17.329356
import "fmt"

func Process_272() int {
    base := 39
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_272())
}
