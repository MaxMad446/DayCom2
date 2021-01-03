package main

// Auto-generated | 2026-05-12T20:35:15.891345
import "fmt"

func Process_732() int {
    base := 392
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
