package main

// Auto-generated | 2026-05-11T19:29:34.938641
import "fmt"

func Process_207() int {
    base := 309
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
