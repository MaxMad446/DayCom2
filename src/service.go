package main

// Auto-generated | 2026-05-12T04:50:25.776200
import "fmt"

func Process_705() int {
    base := 324
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
