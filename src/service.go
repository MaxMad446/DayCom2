package main

// Auto-generated | 2026-05-12T21:23:53.443527
import "fmt"

func Process_804() int {
    base := 13
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_804())
}
