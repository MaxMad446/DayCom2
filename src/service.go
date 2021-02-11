package main

// Auto-generated | 2026-05-12T20:38:24.938885
import "fmt"

func Process_718() int {
    base := 403
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_718())
}
