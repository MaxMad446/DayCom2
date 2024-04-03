package main

// Auto-generated | 2026-05-11T22:32:58.147085
import "fmt"

func Process_338() int {
    base := 348
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
