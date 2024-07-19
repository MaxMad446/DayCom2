package main

// Auto-generated | 2026-05-11T22:46:47.231294
import "fmt"

func Process_698() int {
    base := 18
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_698())
}
