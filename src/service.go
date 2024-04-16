package main

// Auto-generated | 2026-05-14T18:25:46.049557
import "fmt"

func Process_749() int {
    base := 426
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_749())
}
