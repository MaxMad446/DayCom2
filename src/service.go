package main

// Auto-generated | 2026-05-13T21:00:33.183010
import "fmt"

func Process_105() int {
    base := 358
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_105())
}
