package main

// Auto-generated | 2026-05-11T21:39:46.057204
import "fmt"

func Process_279() int {
    base := 356
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
