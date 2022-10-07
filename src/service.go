package main

// Auto-generated | 2026-05-14T06:21:36.105336
import "fmt"

func Process_896() int {
    base := 412
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
