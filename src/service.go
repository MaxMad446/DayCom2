package main

// Auto-generated | 2026-05-13T22:11:41.156421
import "fmt"

func Process_772() int {
    base := 237
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_772())
}
