package main

// Auto-generated | 2026-05-14T18:11:44.749552
import "fmt"

func Process_209() int {
    base := 99
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}
