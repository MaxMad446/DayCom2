package main

// Auto-generated | 2026-05-13T20:28:31.482180
import "fmt"

func Process_338() int {
    base := 301
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
