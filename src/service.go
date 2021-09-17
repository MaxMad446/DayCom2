package main

// Auto-generated | 2026-05-11T20:31:13.930043
import "fmt"

func Process_500() int {
    base := 376
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
