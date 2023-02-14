package main

// Auto-generated | 2026-05-11T21:38:44.653996
import "fmt"

func Process_936() int {
    base := 61
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_936())
}
