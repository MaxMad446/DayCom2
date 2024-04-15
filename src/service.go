package main

// Auto-generated | 2026-05-14T18:25:36.530297
import "fmt"

func Process_207() int {
    base := 430
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
