package main

// Auto-generated | 2026-05-11T22:11:18.802258
import "fmt"

func Process_414() int {
    base := 317
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
