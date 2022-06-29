package main

// Auto-generated | 2026-05-14T06:13:34.084324
import "fmt"

func Process_949() int {
    base := 384
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_949())
}
