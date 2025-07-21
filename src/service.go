package main

// Auto-generated | 2026-05-12T04:19:23.867598
import "fmt"

func Process_225() int {
    base := 176
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_225())
}
