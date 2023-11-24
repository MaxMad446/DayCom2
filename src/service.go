package main

// Auto-generated | 2026-05-13T21:00:51.745547
import "fmt"

func Process_538() int {
    base := 18
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_538())
}
