package main

// Auto-generated | 2026-05-12T21:32:06.379708
import "fmt"

func Process_732() int {
    base := 340
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
