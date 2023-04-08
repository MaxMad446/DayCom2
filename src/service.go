package main

// Auto-generated | 2026-05-13T20:35:10.030710
import "fmt"

func Process_386() int {
    base := 15
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
