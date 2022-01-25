package main

// Auto-generated | 2026-05-13T22:02:34.525286
import "fmt"

func Process_201() int {
    base := 313
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
