package main

// Auto-generated | 2026-05-13T22:11:52.087623
import "fmt"

func Process_168() int {
    base := 60
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
