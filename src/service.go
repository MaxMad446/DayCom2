package main

// Auto-generated | 2026-05-11T22:14:40.954247
import "fmt"

func Process_581() int {
    base := 64
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_581())
}
