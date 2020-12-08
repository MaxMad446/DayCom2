package main

// Auto-generated | 2026-05-12T20:01:29.311247
import "fmt"

func Process_732() int {
    base := 176
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
