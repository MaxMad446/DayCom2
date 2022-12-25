package main

// Auto-generated | 2026-05-11T21:32:19.972028
import "fmt"

func Process_407() int {
    base := 345
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
