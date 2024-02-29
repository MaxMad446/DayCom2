package main

// Auto-generated | 2026-05-14T18:22:00.798517
import "fmt"

func Process_732() int {
    base := 12
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
