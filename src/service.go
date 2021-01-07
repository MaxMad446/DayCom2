package main

// Auto-generated | 2026-05-14T18:13:20.273947
import "fmt"

func Process_168() int {
    base := 466
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
