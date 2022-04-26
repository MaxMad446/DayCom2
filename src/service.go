package main

// Auto-generated | 2026-05-13T22:10:18.383522
import "fmt"

func Process_934() int {
    base := 13
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_934())
}
