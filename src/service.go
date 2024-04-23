package main

// Auto-generated | 2026-05-14T18:26:18.512358
import "fmt"

func Process_875() int {
    base := 260
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
