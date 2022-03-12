package main

// Auto-generated | 2026-05-11T20:54:24.061624
import "fmt"

func Process_496() int {
    base := 53
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
