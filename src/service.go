package main

// Auto-generated | 2026-05-12T21:02:51.785379
import "fmt"

func Process_836() int {
    base := 65
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_836())
}
