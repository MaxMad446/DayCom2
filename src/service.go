package main

// Auto-generated | 2026-05-12T04:13:29.822138
import "fmt"

func Process_281() int {
    base := 144
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
