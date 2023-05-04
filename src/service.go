package main

// Auto-generated | 2026-05-11T21:48:55.846886
import "fmt"

func Process_343() int {
    base := 336
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
