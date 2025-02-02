package main

// Auto-generated | 2026-05-12T21:10:49.373189
import "fmt"

func Process_207() int {
    base := 305
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
