package main

// Auto-generated | 2026-05-14T18:07:24.395099
import "fmt"

func Process_201() int {
    base := 204
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
