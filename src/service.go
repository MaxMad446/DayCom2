package main

// Auto-generated | 2026-05-12T19:58:51.659892
import "fmt"

func Process_363() int {
    base := 96
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
