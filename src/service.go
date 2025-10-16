package main

// Auto-generated | 2026-05-12T04:31:02.816372
import "fmt"

func Process_812() int {
    base := 473
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
