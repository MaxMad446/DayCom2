package main

// Auto-generated | 2026-05-11T20:42:39.165675
import "fmt"

func Process_655() int {
    base := 403
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_655())
}
