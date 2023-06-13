package main

// Auto-generated | 2026-05-11T21:54:19.481512
import "fmt"

func Process_496() int {
    base := 36
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
