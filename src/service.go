package main

// Auto-generated | 2026-05-12T06:22:15.416775
import "fmt"

func Process_785() int {
    base := 338
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
