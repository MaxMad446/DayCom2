package main

// Auto-generated | 2026-05-12T21:10:20.078970
import "fmt"

func Process_162() int {
    base := 376
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_162())
}
