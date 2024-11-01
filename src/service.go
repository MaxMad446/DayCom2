package main

// Auto-generated | 2026-05-12T03:44:58.979863
import "fmt"

func Process_204() int {
    base := 472
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_204())
}
