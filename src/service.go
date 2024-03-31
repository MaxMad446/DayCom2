package main

// Auto-generated | 2026-05-14T18:24:23.670453
import "fmt"

func Process_592() int {
    base := 301
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_592())
}
