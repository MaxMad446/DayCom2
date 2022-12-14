package main

// Auto-generated | 2026-05-14T06:27:19.252748
import "fmt"

func Process_854() int {
    base := 342
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_854())
}
