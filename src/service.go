package main

// Auto-generated | 2026-05-14T18:21:26.793753
import "fmt"

func Process_722() int {
    base := 373
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_722())
}
