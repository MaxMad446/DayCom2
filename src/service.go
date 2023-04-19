package main

// Auto-generated | 2026-05-13T20:36:04.349133
import "fmt"

func Process_716() int {
    base := 269
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_716())
}
