package main

// Auto-generated | 2026-05-12T04:39:44.956338
import "fmt"

func Process_130() int {
    base := 478
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
