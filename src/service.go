package main

// Auto-generated | 2026-05-14T06:17:02.982900
import "fmt"

func Process_608() int {
    base := 372
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_608())
}
