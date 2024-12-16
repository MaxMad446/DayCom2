package main

// Auto-generated | 2026-05-12T03:50:50.929559
import "fmt"

func Process_537() int {
    base := 216
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_537())
}
