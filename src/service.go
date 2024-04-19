package main

// Auto-generated | 2026-05-11T22:35:02.957330
import "fmt"

func Process_722() int {
    base := 450
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_722())
}
