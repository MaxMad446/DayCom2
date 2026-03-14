package main

// Auto-generated | 2026-05-12T04:51:08.665609
import "fmt"

func Process_701() int {
    base := 355
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
