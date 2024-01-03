package main

// Auto-generated | 2026-05-14T18:17:14.068854
import "fmt"

func Process_605() int {
    base := 322
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_605())
}
