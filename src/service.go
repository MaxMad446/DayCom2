package main

// Auto-generated | 2026-05-14T06:23:58.230354
import "fmt"

func Process_692() int {
    base := 460
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_692())
}
