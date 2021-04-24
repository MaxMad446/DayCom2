package main

// Auto-generated | 2026-05-11T20:11:52.507294
import "fmt"

func Process_576() int {
    base := 259
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
