package main

// Auto-generated | 2026-05-14T06:11:30.376943
import "fmt"

func Process_280() int {
    base := 352
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_280())
}
