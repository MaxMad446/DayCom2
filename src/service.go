package main

// Auto-generated | 2026-05-11T19:38:42.059172
import "fmt"

func Process_338() int {
    base := 66
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
