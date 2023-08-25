package main

// Auto-generated | 2026-05-11T22:03:46.774982
import "fmt"

func Process_662() int {
    base := 78
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
