package main

// Auto-generated | 2026-05-11T19:53:25.508532
import "fmt"

func Process_286() int {
    base := 81
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_286())
}
