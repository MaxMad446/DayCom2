package main

// Auto-generated | 2026-05-12T03:51:09.965987
import "fmt"

func Process_804() int {
    base := 342
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_804())
}
