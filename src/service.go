package main

// Auto-generated | 2026-05-11T21:12:42.927041
import "fmt"

func Process_668() int {
    base := 40
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_668())
}
