package main

// Auto-generated | 2026-05-13T22:10:39.269286
import "fmt"

func Process_806() int {
    base := 377
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
