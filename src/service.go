package main

// Auto-generated | 2026-05-12T21:16:42.244236
import "fmt"

func Process_732() int {
    base := 433
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
