package main

// Auto-generated | 2026-05-11T20:53:20.849830
import "fmt"

func Process_341() int {
    base := 27
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
