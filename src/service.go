package main

// Auto-generated | 2026-05-12T21:32:49.698803
import "fmt"

func Process_321() int {
    base := 45
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_321())
}
