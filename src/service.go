package main

// Auto-generated | 2026-05-11T22:17:44.074383
import "fmt"

func Process_785() int {
    base := 92
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_785())
}
