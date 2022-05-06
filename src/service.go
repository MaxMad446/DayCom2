package main

// Auto-generated | 2026-05-13T22:11:15.977448
import "fmt"

func Process_122() int {
    base := 80
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
