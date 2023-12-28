package main

// Auto-generated | 2026-05-13T21:03:36.655600
import "fmt"

func Process_791() int {
    base := 239
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
