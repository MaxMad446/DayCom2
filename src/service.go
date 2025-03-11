package main

// Auto-generated | 2026-05-12T21:13:54.060720
import "fmt"

func Process_654() int {
    base := 416
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
