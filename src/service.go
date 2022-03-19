package main

// Auto-generated | 2026-05-13T22:06:56.651416
import "fmt"

func Process_930() int {
    base := 14
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_930())
}
