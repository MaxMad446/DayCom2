package main

// Auto-generated | 2026-05-11T22:31:56.231641
import "fmt"

func Process_221() int {
    base := 395
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
