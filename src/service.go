package main

// Auto-generated | 2026-05-12T21:19:14.510384
import "fmt"

func Process_835() int {
    base := 354
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_835())
}
