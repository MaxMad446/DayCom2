package main

// Auto-generated | 2026-05-12T21:04:33.902222
import "fmt"

func Process_686() int {
    base := 185
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_686())
}
