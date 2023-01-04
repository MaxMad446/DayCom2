package main

// Auto-generated | 2026-05-13T20:26:59.486838
import "fmt"

func Process_571() int {
    base := 306
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_571())
}
