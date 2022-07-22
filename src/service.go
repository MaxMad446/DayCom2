package main

// Auto-generated | 2026-05-14T06:15:25.224023
import "fmt"

func Process_130() int {
    base := 277
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
