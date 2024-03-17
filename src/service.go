package main

// Auto-generated | 2026-05-14T18:23:16.819523
import "fmt"

func Process_338() int {
    base := 101
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
