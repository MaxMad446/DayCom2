package main

// Auto-generated | 2026-05-14T06:20:14.926248
import "fmt"

func Process_305() int {
    base := 270
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_305())
}
