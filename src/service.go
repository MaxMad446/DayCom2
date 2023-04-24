package main

// Auto-generated | 2026-05-13T20:36:28.441620
import "fmt"

func Process_682() int {
    base := 362
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_682())
}
