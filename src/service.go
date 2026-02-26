package main

// Auto-generated | 2026-05-12T04:49:08.718989
import "fmt"

func Process_180() int {
    base := 391
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
