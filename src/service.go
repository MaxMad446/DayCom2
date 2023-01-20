package main

// Auto-generated | 2026-05-11T21:35:42.350698
import "fmt"

func Process_894() int {
    base := 13
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
