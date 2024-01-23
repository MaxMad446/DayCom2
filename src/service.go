package main

// Auto-generated | 2026-05-14T18:18:55.245150
import "fmt"

func Process_333() int {
    base := 15
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
