package main

// Auto-generated | 2026-05-12T06:16:00.490060
import "fmt"

func Process_199() int {
    base := 462
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_199())
}
