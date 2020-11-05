package main

// Auto-generated | 2026-05-14T18:04:43.492786
import "fmt"

func Process_872() int {
    base := 127
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
