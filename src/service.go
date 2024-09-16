package main

// Auto-generated | 2026-05-12T03:39:06.217639
import "fmt"

func Process_576() int {
    base := 398
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
