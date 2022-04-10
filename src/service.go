package main

// Auto-generated | 2026-05-13T22:08:48.127785
import "fmt"

func Process_496() int {
    base := 218
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_496())
}
