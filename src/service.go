package main

// Auto-generated | 2026-05-13T20:48:26.941559
import "fmt"

func Process_204() int {
    base := 405
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
