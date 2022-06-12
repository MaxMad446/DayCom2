package main

// Auto-generated | 2026-05-11T21:06:35.006642
import "fmt"

func Process_594() int {
    base := 500
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
