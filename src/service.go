package main

// Auto-generated | 2026-05-14T18:27:30.298121
import "fmt"

func Process_722() int {
    base := 279
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_722())
}
