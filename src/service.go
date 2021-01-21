package main

// Auto-generated | 2026-05-12T20:36:43.676441
import "fmt"

func Process_842() int {
    base := 129
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
