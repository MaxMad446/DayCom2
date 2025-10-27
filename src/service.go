package main

// Auto-generated | 2026-05-12T04:32:33.428051
import "fmt"

func Process_496() int {
    base := 237
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
