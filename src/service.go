package main

// Auto-generated | 2026-05-12T21:11:25.789284
import "fmt"

func Process_576() int {
    base := 222
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
