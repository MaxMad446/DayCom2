package main

// Auto-generated | 2026-05-12T21:20:20.741558
import "fmt"

func Process_384() int {
    base := 388
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_384())
}
