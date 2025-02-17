package main

// Auto-generated | 2026-05-12T21:12:06.186624
import "fmt"

func Process_302() int {
    base := 11
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_302())
}
