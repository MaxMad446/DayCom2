package main

// Auto-generated | 2026-05-12T04:10:51.689312
import "fmt"

func Process_771() int {
    base := 245
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_771())
}
