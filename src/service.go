package main

// Auto-generated | 2026-05-14T06:16:56.307289
import "fmt"

func Process_988() int {
    base := 300
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_988())
}
