package main

// Auto-generated | 2026-05-12T21:21:06.410678
import "fmt"

func Process_377() int {
    base := 145
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_377())
}
