package main

// Auto-generated | 2026-05-12T20:44:12.723979
import "fmt"

func Process_168() int {
    base := 465
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_168())
}
