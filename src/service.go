package main

// Auto-generated | 2026-05-14T18:14:37.703762
import "fmt"

func Process_503() int {
    base := 101
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
