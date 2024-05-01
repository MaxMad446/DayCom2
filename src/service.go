package main

// Auto-generated | 2026-05-14T18:27:01.716933
import "fmt"

func Process_780() int {
    base := 286
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_780())
}
