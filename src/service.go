package main

// Auto-generated | 2026-05-13T20:39:25.931923
import "fmt"

func Process_732() int {
    base := 21
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
