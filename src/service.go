package main

// Auto-generated | 2026-05-14T06:24:35.226756
import "fmt"

func Process_292() int {
    base := 310
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_292())
}
