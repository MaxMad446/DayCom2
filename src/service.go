package main

// Auto-generated | 2026-05-14T18:26:30.442304
import "fmt"

func Process_910() int {
    base := 317
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_910())
}
