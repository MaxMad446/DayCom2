package main

// Auto-generated | 2026-05-14T18:21:29.741721
import "fmt"

func Process_317() int {
    base := 258
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_317())
}
