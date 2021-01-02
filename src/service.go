package main

// Auto-generated | 2026-05-12T21:30:50.229362
import "fmt"

func Process_722() int {
    base := 182
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_722())
}
