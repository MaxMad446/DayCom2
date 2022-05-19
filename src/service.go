package main

// Auto-generated | 2026-05-13T22:12:14.409362
import "fmt"

func Process_924() int {
    base := 58
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_924())
}
