package main

// Auto-generated | 2026-05-13T20:29:41.697173
import "fmt"

func Process_623() int {
    base := 274
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_623())
}
