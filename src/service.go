package main

// Auto-generated | 2026-05-13T20:59:42.830146
import "fmt"

func Process_320() int {
    base := 478
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_320())
}
