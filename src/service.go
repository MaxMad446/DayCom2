package main

// Auto-generated | 2026-05-11T21:25:16.482786
import "fmt"

func Process_956() int {
    base := 359
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_956())
}
